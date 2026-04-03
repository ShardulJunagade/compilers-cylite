# Assignment-3 Runbook (Up to Part 5)

This runbook is for the workspace folder `cylite_A3` and covers:
- Building and validating parser changes
- Running Part 1 and Part 2 checks
- Running Part 3 (reverse derivation tree) in terminal
- Generating Graphviz visualization for Part 3
- Running Part 4 (LALR(1) parsing table output in matrix format)
- Running Part 5 (error diagnostics)

## 1. Prerequisites

- Linux environment
- `bison`, `flex` (or `lex`), `gcc`
- `graphviz` (for DOT/PNG visualization)

Quick checks:

```bash
bison --version
flex --version
gcc --version
dot -V
```

## 2. Build the parser

From repository root:

```bash
cd cylite_A3
make clean
make
```

This generates and builds:
- `y.tab.c`, `y.tab.h` from `yapl.y`
- `lex.yy.c` from `yapl.l`
- executable `yapl`

## 3. Part 1 + Part 2 workflow (conflicts and resolution)

### 3.1 Generate parser report

```bash
bison -v -d yapl.y
```

Artifacts:
- `yapl.output` (state machine + conflict report)
- `yapl.tab.h`

### 3.2 Inspect conflicts

```bash
grep -n "conflict" yapl.output
```

Use this for report sections on:
- conflict states
- conflict types (shift/reduce, reduce/reduce)
- productions involved

### 3.3 Validate parser with Assignment-3 tests

```bash
./yapl part3/tests/rdt_basic.cyl
./yapl part3/tests/rdt_extensions.cyl
./yapl part3/tests/rdt_print_strings.cyl
```

Note: The `tests/*.cyl` folder is mainly lexer-focused. For parser validation for Assignment-3, use `part3/tests/*.cyl`.

## 4. Part 3: Reverse Derivation Tree

Part 3 requires:
1. Store derivation during parsing
2. Print derivation in reverse order

The implementation is integrated in `yapl.y` and works by collecting reductions from parser trace and printing them in reverse as top-down derivation steps.

### 4.1 Default terminal output (required mode)

```bash
./yapl part3/tests/rdt_extensions.cyl
```

Output includes:
- parsing summary counters
- `Reverse derivation (top-down)` section
- numbered reverse derivation steps

### 4.2 PNG graph output (optional)

```bash
./yapl part3/tests/rdt_extensions.cyl --png part3/reverse_derivation.png
```

This writes:
- PNG file at the path given to `--png`
- an intermediate DOT for PNG generation: `<png_path>.dot`

## 5. Suggested submission evidence for Part 3

For report/demo:
- Terminal screenshot of successful parse + reverse derivation print
- Intermediate DOT file from PNG generation (`<png_path>.dot`)
- PNG visualization (`part3/reverse_derivation.png`)
- Short explanation of CLI flags:
  - `--png <path>`

## 6. Part 4: Parsing Table Output (Matrix Format)

Part 4 requires ACTION and GOTO parsing tables in tabular form.

Implementation details:
- A Python script parses `yapl.output` directly (no manual table reconstruction).
- Outputs are split into:
  - ACTION table (terminals): `part4/action_table.csv`
  - GOTO table (non-terminals): `part4/goto_table.csv`
- Summary file:
  - `part4/parsing_table_summary.md`
- HTML single-matrix view (ACTION + GOTO in one table):
  - `part4/parsing_table_matrix.html`

### 6.1 Generate Part 4 outputs via Makefile

```bash
cd cylite_A3
make part4
```

This runs:
- `bison -v -d yapl.y` (refreshes `yapl.output`)
- `python3 part4/generate_parsing_table.py yapl.output part4`

### 6.2 Manual command (alternative)

```bash
bison -v -d yapl.y
python3 part4/generate_parsing_table.py yapl.output part4
```

### 6.3 Output artifacts

- `part4/action_table.csv`
- `part4/goto_table.csv`
- `part4/parsing_table_summary.md`
- `part4/parsing_table_matrix.html`

The HTML output displays a single matrix in this structure:
- `State | ACTION terminals... | GOTO non-terminals...`
- grouped section headers for ACTION and GOTO
- sticky headers/state column for easier navigation of large tables

## 7. Common issues

- `dot: command not found`
  - Install Graphviz and re-run.

- Parser builds but input fails with syntax error
  - Re-check whether input follows current grammar.
  - Try known-valid parser tests in `part3/tests` first.

- Large reverse derivation output
  - This is expected for non-trivial input programs.
  - Use output redirection if needed:

```bash
./yapl part3/tests/rdt_extensions.cyl > part3/parse_output.txt
```

## 8. Part 5: Error Diagnostics

Part 5 requires meaningful syntax error messages that help locate the cause.

Current parser diagnostics include:
- exact failure location: line and column
- unexpected token (`yytext`)
- expected tokens (from Bison verbose error details, when available)

### 8.1 Run Part 5 demo via Makefile

```bash
cd cylite_A3
make part5
```

Notes:
- This target intentionally runs invalid test programs.
- Non-zero exits are expected and shown as diagnostics, not build failures.

### 8.2 Part 5 diagnostic test inputs

- `part5/tests/diag_missing_semicolon.cyl`
- `part5/tests/diag_unexpected_else.cyl`

## 9. Added Part-3 test inputs

New parser-focused CYLite tests were added under `part3/tests`:
- `part3/tests/rdt_basic.cyl`
- `part3/tests/rdt_extensions.cyl`
- `part3/tests/rdt_print_strings.cyl`

Use these files as the default validation set for Assignment-3 Parts 1-3.

Suggested validation commands:

```bash
./yapl part3/tests/rdt_basic.cyl --png part3/tests/rdt_basic.png
./yapl part3/tests/rdt_extensions.cyl --png part3/tests/rdt_extensions.png
./yapl part3/tests/rdt_print_strings.cyl --png part3/tests/rdt_print_strings.png
```

## 10. Assignment-wide runner

To build and run current assignment tests (Part 3 set):

```bash
make part3
```
