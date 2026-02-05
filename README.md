This project has been created as part of the 42 curriculum by **cerkurt**.

---

## Index

- [Project Overview](#project-overview)
- [Supported Conversions](#supported-conversions)
- [Project Files](#project-files)
- [How It Works](#how-it-works)
- [Return Value](#return-value)
- [Compilation](#compilation)
- [Usage](#usage)
- [Testing](#testing)
- [Resources](#resources)

---

## Project Overview

The goal of **ft_printf** is to understand and implement:
- **Variadic functions** (`va_list`, `va_start`, `va_arg`, `va_end`)
- **Format string parsing**
- Writing small output helpers using `write()`
- Careful counting of printed characters

This repository builds a static library: **`libftprintf.a`**.

---

## Supported Conversions

This implementation supports the mandatory 42 specifiers:

| Specifier | Meaning | Notes |
|----------|---------|------|
| `%c` | Character | uses `ft_putchar` |
| `%s` | String | prints `(null)` if the string pointer is `NULL` |
| `%p` | Pointer address | prints `0x...` or `(nil)` if `NULL` |
| `%d` / `%i` | Signed decimal integer | base 10 |
| `%u` | Unsigned decimal integer | base 10 |
| `%x` | Unsigned hex (lowercase) | base `0123456789abcdef` |
| `%X` | Unsigned hex (uppercase) | base `0123456789ABCDEF` |
| `%%` | Literal `%` | prints a percent sign |

Anything else after `%` is treated as a normal character in this version.

---

## Project Files

### Mandatory sources

```
ft_printf.c
ft_printf.h
ft_putchar.c
ft_putstr.c
ft_putptr.c
ft_putnbr_base.c
Makefile
```

> Note: the header includes `libft/libft.h`, and the Makefile builds **libft** before creating `libftprintf.a`.

---

## How It Works

### 1) Parsing the format string

`ft_printf` iterates through the format string:
- If the current character is not `%`, it prints it directly.
- If it finds `%`, it checks the next character:
  - If it is a supported specifier, it dispatches printing to `ft_print_arg_type()`.
  - Otherwise it prints the `%` as a normal character flow (project-scope behavior).

### 2) Dispatching by specifier

`ft_print_arg_type()` selects the correct helper based on the specifier:
- `%c` → `ft_putchar()`
- `%s` → `ft_putstr()`
- `%p` → `ft_putptr()`
- `%d/%i` → `ft_putnbr_base_signed()`
- `%u/%x/%X` → `ft_putnbr_base_unsigned()`
- `%%` → prints `%`

### 3) Printing numbers in bases

`ft_putnbr_base.c` handles converting and printing numbers using:
- a **base string** (e.g., `"0123456789abcdef"`)
- recursive / iterative digit printing
- returning the number of printed characters

---

## Return Value

`ft_printf()` returns the **total number of characters written**.

In this project version, it returns `-1` if:
- the format string is `NULL`
- the format string is exactly `"%"` (dangling percent)

---

## Compilation

### Using the Makefile

```bash
make
```

This builds:
- `libft/libft.a`
- `libftprintf.a`

Common targets:

```bash
make        # build library
make clean  # remove object files
make fclean # remove objects + libraries
make re     # rebuild everything
```

---

## Usage

Include the header and link the library:

```c
#include "ft_printf.h"

int main(void)
{
    int count;

    count = ft_printf("Hello %s! Number: %d\n", "Codam", 42);
    ft_printf("Printed %d chars\n", count);
    return (0);
}
```

Compile example:

```bash
cc -Wall -Wextra -Werror main.c -L. -lftprintf -I. -Ilibft
```

---

## Testing

Recommended checks:
- Compare output & return values with the real `printf`
- Test all specifiers: `c s p d i u x X %`
- Edge cases:
  - `NULL` string → should print `(null)`
  - `NULL` pointer → should print `(nil)`
  - negative numbers for `%d/%i`
  - large unsigned values for `%u/%x/%X`

---

## Resources

- Variadic functions: `man stdarg`
- `printf` behavior: `man 3 printf`
- 42 ft_printf subject requirements (intra / PDF)

---
