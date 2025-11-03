# adgDB

[![Unit Tests](https://github.com/adg-all-day/adgDB/actions/workflows/tests.yml/badge.svg)](https://github.com/adg-all-day/adgDB/actions/workflows/tests.yml)

<img src="https://github.com/adg-all-day/adgDB/assets/1011868/3356dfb3-e62c-4019-a43e-afe1a25b457a" alt="adgDB logo" width="150">

**adgDB is an in-memory relational database engine written entirely in C, built from the ground up.**

## Table of Contents

- [Overview](#overview)
- [Design Principles](#design-principles)
- [Getting Started](#getting-started)
- [Usage](#usage)
- [Roadmap](#roadmap)
- [Further Reading](#further-reading)

## Overview

adgDB implements a relational engine — parser, optimiser, executor, and storage primitives — without leaning on an existing database core. It began as a learning exercise and grew into a compact, self-contained engine suitable for study and embedding.

## Design Principles

adgDB is guided by three goals:

| Principle | What it means |
|---|---|
| **Minimal dependencies** | At runtime the engine relies only on `libc` and `libm`, keeping integration straightforward. |
| **Built from scratch** | Every component is implemented in-house — primarily as a vehicle for understanding how databases work internally. |
| **Small footprint** | The compiled library is approximately 200 KB. |

## Getting Started

### Prerequisites

On Ubuntu, install the build toolchain:

```bash
apt install bison flex libfl-dev
```

To build and run the test suite, additionally install:

```bash
apt install libcunit1-dev
```

### Building

From the repository root:

```bash
make
```

### Running the Tests

```bash
make all
./build/tests/run_unit_tests
```

### Linking Against Your Application

Link the shared object into your own executable:

```bash
gcc -L<root_repo>/build/            \
    -ladgdb                      \
    -Wl,-rpath <root_repo>/build/   \
    -o your_code
```

## Usage

The following example opens a database, executes a join with aggregation, and iterates over the results:

```c
#include <engine/query.h>

int main(void) {
        struct database db = {0};
        struct query_output *output;

        if (database_open(&db) != ADGDB_OK)
                return -1;

        output = query_execute(&db, "SELECT "
                                    "    id_a, COUNT(*) "
                                    "FROM "
                                    "    A INNER JOIN B "
                                    "    ON A.id_a = B.id_b "
                                    "GROUP BY "
                                    "    id_a;");

        if (output->status != ST_OK_WITH_RESULTS)
                return -1;

        while (query_cur_step(&output->results) == ADGDB_ROW) {
                printf("id_a: %ld, count: %ld\n",
                        query_column_int64(&output->results, 0),
                        query_column_int64(&output->results, 1));
        }

        query_free(output);
        database_close(&db);
        return 0;
}
```

## Roadmap

Implemented and planned capabilities, tracked to keep the project focused over the short-to-medium term:

- [x] In-memory storage engine
- [x] Parser (`CREATE`, `SELECT`, `INSERT`, `UPDATE`, `DELETE`)
- [x] Recursive joins (`INNER` — additional join types to follow)
- [x] Recursive expressions (`INSERT`)
- [x] Locking (table-level granularity)

## Further Reading

Resources that informed the design and implementation of adgDB:

**Books**

- [flex & bison — Text Processing Tools](https://www.amazon.com/flex-bison-Text-Processing-Tools/dp/0596155972)
- [Database Internals — A Deep Dive into How Distributed Data Systems Work](https://www.amazon.com/Database-Internals-Deep-Distributed-Systems/dp/1492040347)

**Courses**

- [CMU Intro to Database Systems (YouTube)](https://www.youtube.com/watch?v=LWS8LEQAUVc&list=PLSE8ODhjZXjYzlLMbX3cR0sxWnRM7CLFn)
