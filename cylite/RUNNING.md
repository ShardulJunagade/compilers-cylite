# CYLite: How to build, run, and test

This folder contains a `lex` + `bison/yacc` scanner+parser for a C-like language (“yapl”), along with two kinds of test inputs:

- `testcases/` — parser-focused C inputs (`testcase_1.c` … `testcase_14.c`) with expected outputs (`output_1.txt` … `output_14.txt`).
- `tests/` — lexer-focused CYLite inputs (`*.cyl`) used with the token-dump driver (`dump_tokens`).

## Prerequisites

You need a C compiler and the classic compiler-tools:

- `gcc`
- `make`
- `bison` (or `yacc`)
- `lex` (often provided by `flex`)

Quick check:

```sh
gcc --version
make --version
bison --version
lex -V || flex --version
```

If your system does not have `lex`, you likely have `flex` instead. You can either install a `lex` wrapper or replace `lex yapl.l` with `flex yapl.l` when running commands manually.

## Build (recommended)

From this directory:

```sh
make clean
make
```

This produces:

- `yapl` (the parser executable)
- generated files: `lex.yy.c`, `y.tab.c`, `y.tab.h`

## Run the parser

Run `yapl` on any input file:

```sh
./yapl testcases/testcase_1.c
```

Expected behavior: it prints either a parse success summary (with counts like `#global_declarations`, `#function_definitions`, etc.) or a parse/lex error message.

## Run the lexer only (token dump)

`dump_tokens.c` is a small driver that calls `yylex()` repeatedly and prints:

```
<token_id><TAB><yytext>
```

### Build `dump_tokens`

First make sure `lex.yy.c` exists (run `make` once). Then:

```sh
gcc -O2 dump_tokens.c lex.yy.c -o dump_tokens
```

### Run `dump_tokens`

Example:

```sh
./dump_tokens tests/keywords.cyl
./dump_tokens tests/extensions.cyl
```

Notes:

- For single-character tokens (e.g., `;`, `(`, `{`), the lexer returns the character itself, so the printed token id is the ASCII value.
- For named tokens (keywords, identifiers, literals), the numeric ids come from the generated header (`y.tab.h`) and may differ across builds.

## Run the provided parser test suite (`testcases/`)

There are 14 parser testcases with expected outputs.

Run one testcase and compare:

```sh
./yapl testcases/testcase_3.c > actual_3.txt 2>&1
diff -u testcases/output_3.txt actual_3.txt
```

Run all 14 and diff (same idea as `Commands/run.txt`):

```sh
for i in $(seq 1 14); do
  ./yapl testcases/testcase_${i}.c > actual_${i}.txt 2>&1 || true
  echo "=== testcase ${i} ==="
  diff -u testcases/output_${i}.txt actual_${i}.txt || echo "DIFF for testcase ${i}"
done
```

## Manual rebuild workflow (when editing the grammar/lexer)

The Makefile uses `bison -y -d` which generates `y.tab.c`/`y.tab.h` directly.

If you instead run plain `bison -d yapl.y`, Bison often generates `yapl.tab.c`/`yapl.tab.h`. In that case, either use the Makefile, or follow the “copy header” approach:

```sh
# regenerate parser/header
bison -d yapl.y

# generate lexer C
flex yapl.l

# if your lexer includes y.tab.h, make sure it exists
cp yapl.tab.h y.tab.h

# compile (parser file name depends on your bison output)
gcc -O3 lex.yy.c yapl.tab.c -o yapl
```

If you want to avoid this mismatch entirely, the simplest path is:

```sh
make clean
make
```

## Troubleshooting

- **`lex: command not found`**: install `flex` or provide a `lex` wrapper; or use `flex yapl.l` in manual commands.
- **Header mismatch (`y.tab.h` not found)**: run `make` (or `bison -y -d`) so `y.tab.h` is generated, or copy `yapl.tab.h` to `y.tab.h`.
- **Rebuilding after edits**: run `make clean && make` to ensure generated files are refreshed.
- **`bison` shift/reduce warning**: a conflict warning can show up depending on the current grammar; it does not affect `dump_tokens` (lexer-only) runs.
