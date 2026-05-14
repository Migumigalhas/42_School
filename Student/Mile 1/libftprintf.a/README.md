*This project has been created as part of the 42 curriculum by miggomes.*

---

# ft_printf
## Description

A recreation of the C standard library `printf` function, built as part of the 42 school curriculum.

`ft_printf` replicates the behavior of the original `printf`, parsing a format string and printing formatted output to stdout. It returns the total number of characters written, just like the real thing.

---

## Supported Conversions

| Specifier | Description |
|-----------|-------------|
| `%c` | Single character |
| `%s` | String (prints `(null)` if NULL) |
| `%d` | Signed decimal integer |
| `%i` | Signed decimal integer |
| `%u` | Unsigned decimal integer |
| `%x` | Unsigned hexadecimal (lowercase) |
| `%X` | Unsigned hexadecimal (uppercase) |
| `%p` | Pointer address (prints `(nil)` if NULL) |
| `%%` | Literal `%` character |

---

## Files

| File | Description |
|------|-------------|
| `ft_printf.c` | Main function and format string parser |
| `ft_putchar.c` | Prints a single character |
| `ft_putstr.c` | Prints a string |
| `ft_putnbr.c` | Prints a signed integer |
| `ft_putunsigned.c` | Prints an unsigned integer |
| `ft_puthex.c` | Prints a hexadecimal number |
| `ft_putptr.c` | Prints a pointer address |
| `libftprintf.h` | Header file with all prototypes |
| `Makefile` | Build rules |

---

### Link with your project

```bash
cc -Wall -Wextra -Werror your_file.c -L. -lftprintf
```

### Example

```c
#include "libftprintf.h"

int main(void)
{
    int n;

    n = ft_printf("Hello, %s! You are %d years old.\n", "Alice", 30);
    ft_printf("Characters printed: %d\n", n);
    return (0);
}
```

Output:
```
Hello, Alice! You are 30 years old.
Characters printed: 38
```

---

## Makefile Rules

| Rule | Description |
|------|-------------|
| `make` | Compiles the library |
| `make clean` | Removes object files |
| `make fclean` | Removes object files and the library |
| `make re` | Rebuilds everything from scratch |

---

## Notes

- Uses only `write()` for output — no `printf` or `putchar` from libc
- Internal helper functions (`ft_type`, `fake_puthex`) are declared `static`
- Norminette compliant

---

## Resources
 
### Documentation & References
- [C Standard Library Reference — cppreference.com](https://en.cppreference.com/w/c)
- [Manual pages — `man 3 printf`](https://www.man7.org/linux/man-pages/man3/printf.3.html)
- [Variadic functions in C — cppreference.com](https://en.cppreference.com/w/c/variadic)
- [Understanding static libraries in C](https://randu.org/tutorials/c/libraries.php)
- [Hexadecimal number system explained — GeeksforGeeks](https://www.geeksforgeeks.org/hexadecimal-number-system/)
### AI Usage
Claude (Anthropic) was used during this project for the following:
```
Providing explanations for complex concepts such as variadic functions and return value
accumulation, identifying bugs, and giving step-by-step guidance on
implementing functions like ft_puthex and ft_putptr without writing the code directly.
```

## Author

miggomes