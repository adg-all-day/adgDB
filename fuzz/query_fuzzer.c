/*
 * query_fuzzer.c - libFuzzer entry point for the adgDB SQL engine.
 *
 * Drives the full public query pipeline (syntax -> AST -> semantic ->
 * optimiser -> executor) exactly as an embedding application would, via
 * query_execute(). The fuzz input is treated as a sequence of ';'-separated
 * SQL statements that are run, in order, against a single database instance so
 * that a single input can build up schema and rows (CREATE / INSERT) before
 * reaching the deeper optimiser and executor paths (joins, aggregation,
 * UPDATE / DELETE, GROUP BY).
 */

#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

#include <engine/database.h>
#include <engine/error.h>
#include <engine/query.h>

/* Keep the fuzzer focused on structured SQL rather than pathologically large
 * strings that only stress the allocator. */
#define MAX_SQL_INPUT (64 * 1024)

/* Run a single, already NUL-terminated statement (without a trailing ';').
 * A ';' is appended because the grammar requires each statement to be
 * terminated. Empty / whitespace-only statements are skipped. */
static void run_statement(struct database *db, const char *stmt, size_t len)
{
	while (len && (stmt[0] == ' ' || stmt[0] == '\t' ||
		       stmt[0] == '\n' || stmt[0] == '\r')) {
		stmt++;
		len--;
	}
	if (len == 0)
		return;

	char *query = malloc(len + 2);
	if (!query)
		return;
	memcpy(query, stmt, len);
	query[len] = ';';
	query[len + 1] = '\0';

	struct query_output *out = query_execute(db, query);
	if (out)
		query_free(out);

	free(query);
}

int LLVMFuzzerTestOneInput(const uint8_t *data, size_t size)
{
	struct database db = {0};

	if (size == 0 || size > MAX_SQL_INPUT)
		return 0;

	if (database_open(&db) != ADGDB_OK)
		return 0;

	const char *stmt = (const char *)data;
	size_t stmt_len = 0;

	for (size_t i = 0; i < size; i++) {
		if (data[i] == ';') {
			run_statement(&db, stmt, stmt_len);
			stmt = (const char *)&data[i + 1];
			stmt_len = 0;
		} else {
			stmt_len++;
		}
	}
	/* trailing statement with no terminating ';' */
	run_statement(&db, stmt, stmt_len);

	database_close(&db);
	return 0;
}
