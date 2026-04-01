#!/usr/bin/env bash
set -euo pipefail

# Assignment-wide test runner (expand this as Parts 4-6 tests are added).

make clean
make

./yapl part3/tests/rdt_basic.cyl --png part3/tests/rdt_basic.png
./yapl part3/tests/rdt_extensions.cyl --png part3/tests/rdt_extensions.png
./yapl part3/tests/rdt_print_strings.cyl --png part3/tests/rdt_print_strings.png
