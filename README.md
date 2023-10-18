## Monty Bytecode Interpreter

### Description

This GitHub repository hosts the source code for a Monty Bytecode Interpreter, developed as part of a programming project. Monty 0.98 is a scripting language that is first compiled into Monty byte codes, similar to how Python compiles to bytecode. The interpreter relies on a unique stack data structure, with specific instructions to manipulate it. The goal of this project is to create an interpreter for Monty Bytecodes files.

### Project Structure

The repository contains the following key components:

- **monty.c**: The main program file for the Monty interpreter.
- **monty.h**: The header file defining data structures and function prototypes.
- **opcodes.c**: This file contains the implementations of Monty opcodes.
- **stack.c**: Implementation of the stack data structure and its manipulation functions.
- **error_handling.c**: Functions for error handling and printing error messages.
- **free_stack.c**: Code for freeing the stack and allocated memory.

### Compilation & Execution

To compile the Monty interpreter, use the following command:

```bash
$ gcc -Wall -Werror -Wextra -pedantic -std=c89 *.c -o monty
```

To execute the interpreter with a Monty bytecode file, use:

```bash
$ ./monty file
```

### Usage

- If no file is provided or more than one argument is given, the program will display the error message "USAGE: monty file" and exit with EXIT_FAILURE.
- If it's not possible to open the provided file, the program will display an error message like "Error: Can't open file \<file\>" and exit with EXIT_FAILURE.
- If the file contains an invalid instruction, the program will display an error message like "L\<line_number\>: unknown instruction \<opcode\>" and exit with EXIT_FAILURE.

### Monty Bytecode Files

Monty byte code files have the extension `.m`. They contain Monty byte codes, and each line typically represents a single instruction. The interpreter can handle various whitespace and additional text after the opcode or its required argument. Blank lines are also allowed.

### Error Handling

The program provides detailed error messages when issues are encountered, and it exits with EXIT_FAILURE to indicate an error state.

### Contributions

We encourage collaboration and contributions from the community to improve this Monty interpreter. If you have ideas, suggestions, or bug fixes, please feel free to submit a pull request.

