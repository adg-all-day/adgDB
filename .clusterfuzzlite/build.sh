#!/bin/bash -eu
#
# ClusterFuzzLite build script for adgDB.
#
# Compiles the whole engine + library from a clean checkout with the fuzzing
# toolchain's $CFLAGS (so every translation unit is instrumented with the
# active sanitizer) and links the SQL query fuzz target against
# $LIB_FUZZING_ENGINE. The build reads all sources relative to $SRC (the repo
# root and working directory) and writes the resulting binary into $OUT.

# Scratch directory for generated + intermediate artifacts.
WORK="${WORK:-$SRC/work}"
GEN="$WORK/gen"
rm -rf "$WORK"
mkdir -p "$GEN"

# --- 1. Obtain the reentrant flex lexer and bison parser --------------------
# Regenerate from source when flex/bison are available; otherwise fall back to
# the committed, pre-generated parser under fuzz/generated/. This keeps the
# build self-contained and deterministic (no build-time tool or network
# dependency) even on base images that lack flex/bison.
if command -v flex >/dev/null 2>&1 && command -v bison >/dev/null 2>&1; then
	flex --header-file="$GEN/adgsql.yy.h" -o "$GEN/adgsql.yy.c" "$SRC/src/parser/adgsql.l"
	bison -d -o "$GEN/adgsql.tab.c" "$SRC/src/parser/adgsql.y"
else
	echo "flex/bison not found; using committed pre-generated parser (fuzz/generated/)"
	cp "$SRC/fuzz/generated/adgsql.yy.c"  "$SRC/fuzz/generated/adgsql.yy.h" \
	   "$SRC/fuzz/generated/adgsql.tab.c" "$SRC/fuzz/generated/adgsql.tab.h" "$GEN/"
fi

# Project headers + generated parser headers.
INCLUDES="-I$SRC/include -I$GEN"
# Generated flex/bison code is noisy; we don't control its style.
EXTRA="-Wno-unused-function -Wno-unused-but-set-variable -Wno-unused-parameter"

OBJS=()
compile() {
	local src="$1"
	local obj
	obj="$WORK/$(echo "$src" | tr '/.' '__').o"
	$CC $CFLAGS $INCLUDES $EXTRA -c "$src" -o "$obj"
	OBJS+=("$obj")
}

# --- 2. Compile every engine/library translation unit -----------------------
#        (skip src/main/main.c: a no-op stub with no entry point we need).
while IFS= read -r f; do
	compile "$f"
done < <(find "$SRC/src" -name '*.c' -not -path '*/main/*')

# --- 3. Compile the generated parser sources --------------------------------
compile "$GEN/adgsql.yy.c"
compile "$GEN/adgsql.tab.c"

# --- 4. Build and link the fuzz target --------------------------------------
$CC $CFLAGS $INCLUDES -c "$SRC/fuzz/query_fuzzer.c" -o "$WORK/query_fuzzer.o"

$CXX $CXXFLAGS "$WORK/query_fuzzer.o" "${OBJS[@]}" \
	$LIB_FUZZING_ENGINE -lm -lpthread \
	-o "$OUT/query_fuzzer"

# --- 5. Package the seed corpus ---------------------------------------------
if [ -d "$SRC/fuzz/corpus" ] && [ -n "$(ls -A "$SRC/fuzz/corpus" 2>/dev/null)" ]; then
	(cd "$SRC/fuzz/corpus" && zip -q -r "$OUT/query_fuzzer_seed_corpus.zip" .)
fi
