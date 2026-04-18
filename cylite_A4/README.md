# CYLite Assignment 4

Main submission document: [report_A4.pdf](./report/report_A4.pdf)

Assignment 4 extends CYLite from syntax validation to syntax-directed translation by generating intermediate code in Three Address Code (TAC) quadruple form.

## Project Scope

This repository version covers Assignment 4 objectives:

1. Build TAC generation into the parser using semantic actions.
2. Represent intermediate code as quadruples (op, arg1, arg2, result).
3. Generate TAC for arithmetic and logical expressions.
4. Generate TAC for assignments and compound assignments.
5. Lower control flow (if/elif/else, loops) into labels and jumps.
6. Print row-wise, readable intermediate code output.
7. Preserve meaningful syntax diagnostics and robust error handling.

## Core Assignment 4 Additions

- Quadruple table and helper APIs for IR emission.
- Temporary variable generation (t1, t2, ...).
- Label generation for control-flow lowering (L1, L2, ...).
- Expression-level semantic value propagation across grammar rules.
- Assignment destination safety checks to preserve valid LHS stores.
- Structured printing of generated TAC after parsing.

## Repository Structure (Assignment 4)

- `yapl.y`: Bison grammar with semantic actions for TAC generation.
- `yapl.l`: Flex lexer with token/lexeme propagation to parser semantic values.
- `testcases_a4/`: Assignment 4 focused testcases and generated outputs.
- `report/report_A4.tex`: Full technical report for Assignment 4.
- `report/report_A4.pdf`: Compiled Assignment 4 report.
- `additions.txt`: Quick summary of A4 token/grammar additions.

## Prerequisites

- Linux environment
- `bison`
- `flex` (or `lex`)
- `gcc`

Quick checks:

```bash
bison --version
flex --version
gcc --version
```

## Build

From repository root:

```bash
cd cylite_A4
make clean
make
```

Build outputs include:

- `y.tab.c`, `y.tab.h`
- `lex.yy.c`
- executable `yapl`

## Usage

Run on a single testcase:

```bash
./yapl testcases_a4/tc1.c
```

Run all Assignment 4 testcase inputs:

```bash
for i in {1..10}; do
	./yapl testcases_a4/tc${i}.c > testcases_a4/tc${i}.txt 2>&1 || true
done
```

## Output Format

Generated IR is printed as a TAC table with columns:

- `statement`
- `op`
- `arg1`
- `arg2`
- `result`

Typical rows include:

- expression rows like `t1=b*5`
- assignment rows like `c=t2`
- control-flow rows like `ifFalse t1 goto L1`, `goto L2`, `LABEL L1`

## Error Handling (Assignment 4)

The parser reports syntax failures with useful location-aware diagnostics and exits cleanly on invalid programs.

Example invalid run:

```bash
./yapl test_error.c
```

Expected behavior:

- parsing terminated message
- line/column location
- unexpected token information

## Build and Reproduction Steps

```bash
cd cylite_A4
make clean
make
./yapl testcases_a4/tc1.c
```

## Validation Inputs

Recommended Assignment 4 validation set:

- `testcases_a4/tc1.c` to `testcases_a4/tc10.c`
- `testcases_a4/expr_test.c`
- `testcases_a4/structured_test.c`
