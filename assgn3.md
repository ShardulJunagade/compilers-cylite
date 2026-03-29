# CS327: Compilers - Lab Assignment #3
## LALR(1) Parser Construction and Conflict Resolution

| Field | Details |
|-------|---------|
| **Course** | CS327 Compilers |
| **Instructor** | Shouvick Mondal |
| **Semester** | January–May 2026 |
| **Maximum Marks** | 30 (including bonus: 10) |
| **Deadline** | March 31, 2026, 23:59:59 IST |

---

## Objective

The primary objective of this assignment is to:

1. Construct the LALR(1) automaton for a parser.
2. Identify shift/reduce and reduce/reduce conflicts in the LALR(1) parser.
3. Fix the conflicts by modifying the grammar.
4. Demonstrate how the conflicts were resolved using before and after parsing examples.
5. Store and display the derivation tree in reverse after successful parsing.
6. Display the parsing table in a matrix format.
7. Provide useful error diagnostics to help locate the cause of parsing errors.

---

## Prerequisites

Before starting this assignment, ensure you have:

### 1. Knowledge Prerequisites
- Understanding of context-free grammars
- Familiarity with Bottom-up parsing concepts
- Knowledge of shift/reduce and reduce/reduce conflicts
- Basic programming knowledge

### 2. Software Prerequisites
- Linux/Unix environment (or WSL on Windows)
- Compiler and development tools installed
- Text editor (vim, emacs, VS Code, etc.)
- Access to terminal/command line

---

## Important Notes

- Follow the instructions provided for constructing the LALR(1) parser.
- Ensure that conflicts in the LALR(1) automaton are clearly identified and explained.
- The parsing table must follow the format used in the lecture slides.
- Error diagnostics are an important part of the assignment, so try to provide meaningful feedback during parsing.

---

## Assignment Description *(Part 1 and 2 is bare minimum)*

### Part 1 (10 marks): Construction of LALR(1) Automaton

Construct the LALR(1) automaton for the grammar corresponding to your language specification in A2.

**Your tasks:**

1. Construct the LALR(1) item sets.
2. Build the LALR(1) automaton.
3. Identify any shift/reduce conflicts or reduce/reduce conflicts.
4. Explicitly show:
   - The state(s) where the conflict occurs
   - The type of conflict
   - The exact productions involved in the conflict

---

### Part 2 (10 marks): Conflict Identification and Resolution

Resolve the conflicts identified in Part 1.

**Your tasks:**

1. Clearly explain the conflicts present in the original grammar.
2. Modify the grammar to remove all conflicts.
3. Show how the grammar change resolves the conflicts.
4. Demonstrate the fix with before and after examples of input sentences being parsed.

---

### Part 3 (2.5 marks): Reverse Derivation Tree

After successful parsing, the parser must:

1. Store the derivation tree generated during parsing.
2. Display the derivation tree in reverse order.

---

### Part 4 (2.5 marks): Parsing Table Output

The parser must output the LALR(1) parsing table.

**Requirements:**

- The parsing table must be displayed in matrix (tabular) format.
- The format should follow the structure used in the lecture slides.

---

### Part 5 (3 marks): Error Diagnostics

Provide error diagnostics during parsing.

**Requirements:**

- Try to locate the cause of the error in the input.
- Display useful messages to help identify the problem.

> Error diagnostics are very crucial for a language processor, so try to make them as informative as possible.

---

### Part 6 (2 marks): Additional Information

You may include any other information you want to show related to their parser implementation or analysis.

---

> **Note:** Please go through the course plan + GitHub for the coverage of topics as necessary for your assignment.
