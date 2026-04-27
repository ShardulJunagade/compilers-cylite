Name: Shardul
Roll Number: 23110297
Email: 23110297@iitgn.ac.in
Programming Language Used (Part 3): C

Compilation Instructions:

For Part 1:
Navigate to Part1/ directory. All intermediate files (hello.i, hello.s, hello.o) and the final executable (hello) are already generated and included.

For Part 2:
Navigate to Part2/ directory. The assembly files (optimize_O0.s and optimize_O2.s) are already generated and included.

For Part 3 (Tokenizer):
Navigate to Part3/ directory and compile using:
    gcc tokenizer.c -o tokenizer

To run the tokenizer with a test file:
    ./tokenizer < public_test1.txt

Or run interactively by typing:
    ./tokenizer
Then input your code and press Ctrl+D when done.

Known Issues/Limitations:
None.

Design Choices and Edge Case Handling:

1. Buffer size: Set to 10000 characters to handle very long identifiers and numbers.
   This should be enough for any practical test case.

2. Whitespace handling: Multiple spaces, tabs, and empty lines are all ignored as 
   specified. The tokenizer processes tokens in order regardless of whitespace.

3. Identifiers: Can start with underscore or letter, followed by any combination 
   of letters, digits, or underscores. Examples: _var, var123, __test all work.

4. Unknown tokens: Anything that doesn't match the defined categories (keywords, 
   identifiers, numbers, operators, punctuation) is marked as UNKNOWN and processed 
   one character at a time.
