*This project has been created as part of the 42 curriculum by tochaves.*

# ft_printf

## Description

ft_printf is a recreation of the standard C library function `printf()`. The goal is to produce a static library `libftprintf.a` that replicates the behaviour of the original `printf()` for a specific set of format specifiers.

The project introduces **variadic functions** in C — functions that accept a variable number of arguments using the `va_list` macros (`va_start`, `va_arg`, `va_end`).

### Supported conversions

| Specifier | Output |
|-----------|--------|
| `%c` | Single character |
| `%s` | String |
| `%p` | Pointer address in hexadecimal |
| `%d` | Decimal integer (base 10) |
| `%i` | Integer in base 10 |
| `%u` | Unsigned decimal integer |
| `%x` | Hexadecimal (lowercase) |
| `%X` | Hexadecimal (uppercase) |
| `%%` | Literal percent sign |

---

## Algorithm and Data Structure

The core of `ft_printf` is a **linear scan** of the format string, character by character:

- If the current character is not `%`, it is written directly to stdout using `write()` and the count is incremented.
- If the current character is `%`, the next character is read to identify the conversion specifier. A dispatcher function (`specifier_format`) selects the appropriate handler function using a chain of `if/else if` conditions.
- Each handler function uses `va_arg` to extract the next argument from the `va_list` with the correct type, prints it using `write()`, and returns the number of characters printed.
- The total character count is accumulated and returned at the end.

For numeric conversions (`%d`, `%u`, `%x`, `%X`, `%p`), a **recursive approach** was chosen: the number is divided by its base repeatedly until a single digit remains, then digits are printed on the way back up the call stack. This avoids the need for intermediate buffers or string reversal.

The `va_list` is passed by pointer to handler functions to ensure the same list state is shared across all calls within a single `ft_printf` invocation.

---

## Instructions

### Compilation

make


This produces the static library `libftprintf.a` at the root of the repository.

### Usage in a project

Include the header and link the library when compiling:


cc -Wall -Wextra -Werror your_file.c ft_printf.c print_char.c print_hex.c print_number.c print_pointer.c print_string.c print_unsigned.c libftprintf.a


In your source file:

```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello %s! You are %d years old.\n", "world", 42);
}
```

### Cleaning


make clean    # removes object files

make fclean   # removes object files and library

make re       # full recompile


---

## Resources

- [Variadic Functions in C — Viva o Linux](https://www.vivaolinux.com.br/artigo/Linguagem-C-Funcoes-Variadicas?pagina=2) — explanation of `va_list`, `va_start`, `va_arg` and `va_end` with practical examples.
- [INT_MAX and INT_MIN in C — GeeksforGeeks](https://www.geeksforgeeks.org/cpp/int_max-int_min-cc-applications/) — used to understand integer limits and edge cases for `%d` and `%i`.
- [printf manual page — Linux man pages](https://man7.org/linux/man-pages/man3/printf.3.html) — official reference for the expected behaviour of each conversion specifier.
- [write system call — Linux man pages](https://man7.org/linux/man-pages/man2/write.2.html) — reference for the `write()` function used throughout the project.

