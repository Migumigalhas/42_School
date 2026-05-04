*This project has been created as part of the 42 curriculum by miggomes.*

---

# Libft

## Description

Libft is the first project of the 42 curriculum. The goal is to recode a set of standard C library functions from scratch, understanding their internal behaviour, and compile them into a static library (`libft.a`) that can be reused across all future 42 projects.

The library is divided into three parts:

- **Libc functions** — reimplementations of standard functions from `<string.h>`, `<ctype.h>`, and `<stdlib.h>`
- **Additional functions** — utility functions not in the standard library but useful throughout the curriculum
- **Bonus functions** — linked list manipulation functions using the `t_list` struct

---

## Instructions

### ⚙️ Compilation
The library is compiled into a `libft.a` file using the `Makefile`.

| Command | Action |
| :--- | :--- |
| `make` | Compiles all functions. |
| `make clean` | Removes all object files (.o). |
| `make fclean` | Removes all object files and the library (libft.a). |
| `make re` | Performs a full re-compilation (fclean + make). |


---

### Makefile Rules

| Rule | Description |
|------|-------------|
| `make` / `make all` | Compiles `libft.a` |
| `make bonus` | Compiles and adds bonus functions to `libft.a` |
| `make clean` | Removes object files |
| `make fclean` | Removes object files and `libft.a` |
| `make re` | `fclean` + `all` |



---

## Library Description

### File Structure

```
libft/
├── libft.h       # Header — structs, prototypes, includes
├── Makefile
├── ft_*.c        # One source file per function
└── README.md
```

### Part 1 — Libc Functions

#### Character checks (`<ctype.h>`)

| Function | Description |
|----------|-------------|
| `ft_isalpha` | Checks if char is alphabetic |
| `ft_isdigit` | Checks if char is a digit (0–9) |
| `ft_isalnum` | Checks if char is alphanumeric |
| `ft_isascii` | Checks if char fits in ASCII table |
| `ft_isprint` | Checks if char is printable |
| `ft_toupper` | Converts char to uppercase |
| `ft_tolower` | Converts char to lowercase |

#### String functions (`<string.h>`)

| Function | Description |
|----------|-------------|
| `ft_strlen` | Returns the length of a string |
| `ft_strlcpy` | Copies a string with a size limit |
| `ft_strlcat` | Concatenates a string with a size limit |
| `ft_strchr` | Finds first occurrence of a char in a string |
| `ft_strrchr` | Finds last occurrence of a char in a string |
| `ft_strncmp` | Compares two strings up to n characters |
| `ft_strnstr` | Locates a substring within a string |
| `ft_strdup` | Returns a malloc'd duplicate of a string |

#### Memory functions (`<string.h>`)

| Function | Description |
|----------|-------------|
| `ft_memset` | Fills a memory area with a constant byte |
| `ft_bzero` | Sets a memory area to zero |
| `ft_memcpy` | Copies a memory area |
| `ft_memmove` | Copies a memory area, handles overlapping regions |
| `ft_memchr` | Scans memory for a byte value |
| `ft_memcmp` | Compares two memory areas |

#### Conversion & allocation

| Function | Description |
|----------|-------------|
| `ft_atoi` | Converts a string to an integer |
| `ft_calloc` | Allocates memory and initialises it to zero |

---

### Part 2 — Additional Functions

| Function | Description |
|----------|-------------|
| `ft_substr` | Returns a malloc'd substring from a string |
| `ft_strjoin` | Returns a malloc'd concatenation of two strings |
| `ft_strtrim` | Trims a set of characters from both ends of a string |
| `ft_split` | Splits a string by a delimiter, returns a NULL-terminated array |
| `ft_itoa` | Converts an integer to a malloc'd string |
| `ft_strmapi` | Applies a function to each char, returns a new string |
| `ft_striteri` | Applies a function to each char of a string in place |
| `ft_putchar_fd` | Writes a char to a file descriptor |
| `ft_putstr_fd` | Writes a string to a file descriptor |
| `ft_putendl_fd` | Writes a string followed by a newline to a file descriptor |
| `ft_putnbr_fd` | Writes an integer to a file descriptor |

---

### Bonus — Linked List Functions

The bonus part uses the following struct defined in `libft.h`:

```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;
```

| Function | Description |
|----------|-------------|
| `ft_lstnew` | Allocates and returns a new node |
| `ft_lstadd_front` | Adds a node at the front of the list |
| `ft_lstsize` | Returns the number of nodes in the list |
| `ft_lstlast` | Returns the last node of the list |
| `ft_lstadd_back` | Adds a node at the back of the list |
| `ft_lstdelone` | Frees the content and the node itself |
| `ft_lstclear` | Deletes and frees the entire list |
| `ft_lstiter` | Iterates over the list and applies a function to each node |
| `ft_lstmap` | Maps a function over the list and returns a new list |

---

## Resources

### Documentation & References

- [C Standard Library Reference — cppreference.com](https://en.cppreference.com/w/c)
- [Manual pages — `man 3 <function_name>`](https://www.man7.org/linux/man-pages/)
- [Understanding static libraries in C](https://randu.org/tutorials/c/libraries.php)
- [Linked lists explained — GeeksforGeeks](https://www.geeksforgeeks.org/linked-list-data-structure/)

### AI Usage

Claude (Anthropic) was used during this project for the following:

```
Providing explanations for complex concepts, suggesting improvements to existing implementations, and supporting debugging and problem-solving tasks.
```