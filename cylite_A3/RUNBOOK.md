# Assignment-3 Runbook (Up to Part 3)

This runbook is for the workspace folder `cylite_A3` and covers:
- Building and validating parser changes
- Running Part 1 and Part 2 checks
- Running Part 3 (reverse derivation tree) in terminal
- Generating Graphviz visualization for Part 3

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

## 6. Common issues

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

## 7. Added Part-3 test inputs

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
