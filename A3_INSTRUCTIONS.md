# CYLite Assignment 3: Execution Instructions (Part-wise)

This document explains how to run and verify each part of Assignment 3 using the updated parser in the `cylite/` folder.

## 1) Build the parser

```sh
cd cylite
make clean
make
```

Binary produced: `./yapl`

## 2) Part 1: LALR(1) automaton and conflict identification

Generate automaton and conflict report:

```sh
make a3-conflicts
```

Output file:
- `cylite/a3_artifacts/conflict_report.txt`

What to check:
- If there are conflicts, they appear in this report as shift/reduce or reduce/reduce.
- In the current updated grammar, this file is expected to be empty (or contain only command noise), indicating conflict-free parsing tables.

## 3) Part 2: Conflict resolution proof (before vs after)

### Before (baseline from earlier grammar)
Previously, the grammar had dangling-else-related conflicts (notably around labeled/loop/switch bodies), including:
- one shift/reduce conflict in the old parser output state table.

### After (current grammar)
The statement grammar is refactored into matched/unmatched forms for:
- labels
- switch
- while/do/for
- range-for and foreach forms

Verification command:

```sh
bison -y -d -Wcounterexamples yapl.y
```

Expected:
- no shift/reduce
- no reduce/reduce

## 4) Part 3: Reverse derivation output

Run parser on a valid input:

```sh
./yapl a3_tests/valid_extensions.c
```

Expected output includes:
- parse summary counters
- section header: `=== Reverse Derivation (high-level reductions) ===`
- reductions printed in reverse order (latest reduction first)

## 5) Part 4: Parsing table in matrix format

Generate matrix CSV files from `yapl.output`:

```sh
make a3-table
```

Generated files:
- `cylite/a3_artifacts/action_table.csv`
- `cylite/a3_artifacts/goto_table.csv`
- `cylite/a3_artifacts/parsing_table_summary.md`

Use these CSV files directly in spreadsheet tools or convert to PDF/screenshots for report slides.

## 6) Part 5: Error diagnostics

Run syntax error demo:

```sh
./yapl a3_tests/syntax_error_demo.c
```

Expected style:
- line number
- nearest token text
- syntax error message

Example format:

```text
***parsing terminated*** [syntax error] at line <line_no> near token "<token>"
Details: syntax error
```

## 7) Demo programs added for A3

Run these:

```sh
./yapl a3_tests/valid_extensions.c
./yapl a3_tests/dangling_else_demo.c
./yapl a3_tests/elif_demo.c
./yapl a3_tests/syntax_error_demo.c
```

Purpose:
- `valid_extensions.c`: CYLite statements (`pass`, `print`, `try/except`, `range`, `foreach`)
- `dangling_else_demo.c`: validates else-binding behavior in nested control flow
- `elif_demo.c`: validates `elif` chains with and without final `else`
- `syntax_error_demo.c`: diagnostics demo

## 8) Suggested viva/demo sequence

1. Build (`make`).
2. Show conflict report (`make a3-conflicts`).
3. Show parse-table matrix files (`make a3-table`).
4. Run valid demo and point to reverse derivation block.
5. Run syntax-error demo and explain diagnostics.
