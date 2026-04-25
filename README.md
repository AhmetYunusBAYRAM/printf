*This project has been created as part of the 42 curriculum by [abayram]*

# ft_printf

## Description

**ft_printf** is a reimplementation of the standard C `printf` function.
The goal is to understand variadic functions, formatted output, and string parsing by building a simplified version from scratch.

It supports basic format specifiers and reproduces the behavior of `printf` for common use cases.

---

## Instructions

### Compilation

make

### Usage

#include "ft_printf.h"

gcc main.c libftprintf.a

### Example

ft_printf("Hello %s %d\n", "world", 42);

---

## Algorithm & Data Structure

The function parses the format string linearly.
When encountering `%`, it selects the correct handler and retrieves arguments using `va_arg`.

* Time complexity: O(n)
* No complex data structures used
* Modular handler functions for each specifier

This approach is simple, efficient, and close to the original `printf` behavior.

---

## Resources

* `printf` manual
* `stdarg.h` documentation
* POSIX `write()`

### AI Usage

AI was used for:

* Understanding edge cases
* Clarifying variadic functions
* Improving documentation

All code was written independently.
