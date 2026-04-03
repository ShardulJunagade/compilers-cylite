# CYLite Assignment 3

LALR(1) parser construction, conflict analysis and resolution, reverse derivation output, parsing table generation, and syntax diagnostics for the CYLite language (YAPL extension).

## Project Scope

This repository version covers Assignment 3 objectives:

1. Build the LALR(1) automaton from the CYLite grammar.
2. Identify shift/reduce and reduce/reduce conflicts.
3. Resolve conflicts with grammar and precedence changes.
4. Demonstrate before/after behavior on focused test cases.
5. Print reverse derivation after successful parse.
6. Generate parsing table output in matrix/tabular form.
7. Provide meaningful syntax error diagnostics.

## Implemented Language Extensions

CYLite extends the baseline YAPL grammar with the following features:

- `elif` chains integrated into selection statements.
- `pass` as an explicit no-op statement.
- `try-except` block syntax.
- `print(...)` built-in parsing support.
- `foreach (id in expr)` loop form.
- `for (id in range(a, b))` loop form.

## Repository Structure (Assignment 3)

- `yapl.y`: Bison grammar with conflict-resolution updates and parser actions.
- `yapl.l`: Flex lexer with tokenization and position tracking for diagnostics.
- `part3/tests/`: Reverse-derivation tests and output artifacts.
- `part4/`: Parsing-table generator script and generated matrix artifacts.
- `part5/tests/`: Invalid inputs and captured syntax-diagnostic outputs.
- `report/report.tex`: Full technical report for Parts 1-6.

## Prerequisites

- Linux environment
- `bison`
- `flex` (or `lex`)
- `gcc`
- `python3`
- `graphviz` (only required for SVG output in Part 3)

Quick checks:

```bash
bison --version
flex --version
gcc --version
python3 --version
dot -V
```

## Build

From repository root:

```bash
cd cylite_A3
make clean
make
```

Build outputs include:

- `y.tab.c`, `y.tab.h`
- `lex.yy.c`
- executable `yapl`

## Assignment Workflow

### Part 1 and Part 2: Automaton + Conflict Resolution

Generate verbose automaton and parser report:

```bash
bison -v -d yapl.y
```

Inspect conflicts:

```bash
grep -n "conflict" yapl.output
```

Use `yapl.output` to document:

- conflict states
- conflict type (shift/reduce or reduce/reduce)
- exact productions involved

### Part 3: Reverse Derivation Tree

Run parser-focused tests:

```bash
./yapl part3/tests/rdt_basic.cyl
./yapl part3/tests/rdt_extensions.cyl
./yapl part3/tests/rdt_print_strings.cyl
```

Generate SVG visualization (optional):

```bash
./yapl part3/tests/rdt_extensions.cyl --svg part3/tests/rdt_extensions.svg
```

This produces:

- terminal reverse derivation output
- SVG file at the provided path
- intermediate DOT file at `<svg_path>.dot`

Assignment target:

```bash
make part3
```

### Part 4: Parsing Table Matrix Output

Generate ACTION/GOTO tables and matrix view:

```bash
make part4
```

Equivalent manual steps:

```bash
bison -v -d yapl.y
python3 part4/generate_parsing_table.py yapl.output part4
```

Generated artifacts:

- `part4/action_table.csv`
- `part4/goto_table.csv`
- `part4/parsing_table_summary.md`
- `part4/parsing_table_matrix.html`

### Part 5: Error Diagnostics

Run diagnostics suite on intentionally invalid programs:

```bash
make part5
```

Diagnostics include:

- line and column of failure
- unexpected token
- expected tokens (when available from Bison verbose errors)

Outputs are saved as:

- `part5/tests/output_diag_*.txt`


## Validation Inputs

Recommended parser validation set:

- `part3/tests/rdt_basic.cyl`
- `part3/tests/rdt_extensions.cyl`
- `part3/tests/rdt_print_strings.cyl`

Recommended diagnostic validation set:

- `part5/tests/diag_missing_semicolon.cyl`
- `part5/tests/diag_unexpected_else.cyl`
- `part5/tests/diag_missing_semicolon_after_print.cyl`
- `part5/tests/diag_missing_closing_brace.cyl`
- `part5/tests/diag_bad_for_range_syntax.cyl`
- `part5/tests/diag_bad_try_except_syntax.cyl`
- `part5/tests/diag_invalid_character.cyl`
