*This project has been created as part of the 42 curriculum by miggomes.*

# get_next_line

## Description

`get_next_line` is a C function that reads a file descriptor line by line, returning one line per call including the newline character `\n` when present. The goal of the project is to understand static variables, memory management, and how to handle file I/O in C without relying on standard library string functions.

Each call to `get_next_line(fd)` returns the next line from the given file descriptor. When there are no more lines to read, it returns `NULL`. The function works for regular files, standard input, and multiple file descriptors.

## Instructions

### Compilation

```bash
cc -Wall -Wextra -Werror -D BUFFER_SIZE=42 get_next_line.c get_next_line_utils.c main.c -o gnl
```

You can change `BUFFER_SIZE` to any positive integer:

```bash
cc -D BUFFER_SIZE=1   # reads one byte at a time
cc -D BUFFER_SIZE=42  # default
cc -D BUFFER_SIZE=9999 # reads large chunks
```

### Usage

```c
#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int main(void)
{
    int     fd;
    char    *line;

    fd = open("file.txt", O_RDONLY);
    while ((line = get_next_line(fd)) != NULL)
    {
        printf("%s", line);
        free(line);
    }
    close(fd);
    return (0);
}
```

### Files

| File | Description |
|---|---|
| `get_next_line.h` | Header file with prototypes and `BUFFER_SIZE` definition |
| `get_next_line.c` | Main function `get_next_line` |
| `get_next_line_utils.c` | Helper functions: `ft_strlen`, `ft_strchr`, `ft_strjoin`, `ft_substr`, `read_and_store` |

## Algorithm

The algorithm is based on a **static buffer accumulation** approach:

1. A `static char *storage` variable persists between function calls, holding any leftover data from the previous read.
2. On each call, `read_and_store` reads from the file descriptor in chunks of `BUFFER_SIZE` bytes, appending each chunk to `storage` using `ft_strjoin`, until a `\n` is found in `storage` or `read()` returns 0 (EOF).
3. Once reading stops, `ft_strchr` locates the `\n` in `storage`.
4. `ft_substr` extracts everything from the start of `storage` up to and including the `\n` — this is the line that gets returned.
5. `storage` is then updated to hold only what comes after the `\n`, ready for the next call.

This approach was chosen because it cleanly separates the three responsibilities (reading, extracting, updating) while keeping the function within the 25-line norm limit. The static variable is the key mechanism that allows the function to "remember" partial data between calls without using global variables or passing extra parameters.

**Why static and not global?** A static local variable is scoped to the function, which is safer and cleaner than a global. It avoids polluting the namespace while still persisting across calls.

**Edge cases handled:**
- `BUFFER_SIZE` of 1 (reads byte by byte)
- Files with no newline at the end
- Empty files
- Invalid file descriptors

## Resources

- [man 2 read](https://man7.org/linux/man-pages/man2/read.2.html) — read syscall documentation
- [man 2 open](https://man7.org/linux/man-pages/man2/open.2.html) — open syscall documentation
- [Static variables in C — GeeksForGeeks](https://www.geeksforgeeks.org/static-variables-in-c/)
- [File descriptors explained](https://bottomupcs.com/chapter01.xhtml)
- 42 project subject PDF

### AI Usage

Claude (Anthropic) was used during this project for the following:

- Explaining concepts such as static variables, file descriptors, and `BUFFER_SIZE`
- Reviewing code for memory leaks and norm violations (25-line limit per function)
- Helping debug a memory leak caused by freeing `storage` before saving the new `ft_substr` result into a temp variable

## Author

-> miggomes