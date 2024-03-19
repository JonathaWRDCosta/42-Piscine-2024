## Documentation for `ft_putstr`

This document explains the code for the function `ft_putstr` and how to run it on your local machine. However, there's a minor detail to address regarding the header file inclusion.

**Functionality:**

The `ft_putstr` function takes a character pointer (`str`) as input, which points to a string literal. It iterates through the string character by character until it encounters the null terminator (`\0`). For each character, the function writes it to the standard output (typically the console) using the `write` system call.

**Compiling and Running the Code (using write):**

**Assuming you're on a Unix-like system:**

1. **Save the code:** Create a file named `ft_putstr.c` and paste the following code snippet:

```c
#include <unistd.h>

void ft_putstr(char *str)
{
  int i;

  i = 0;
  while (str[i] != '\0')
  {
    write(1, &str[i], 1);
    i++;
  }
}

/*
int main(void)
{
  char str[] = "Hello there :D";
  ft_putstr(str);
}
*/
```

2. **Compile the code:** Open a terminal and navigate to the directory where you saved `ft_putstr.c`. Compile the code using the following command, replacing `FILENAME` with the actual filename if it's different:

```bash
cc -Wall -Wextra -Werror *.c
```

This command compiles the C code with the flags you provided (`-Wall`, `-Wextra`, and `-Werror`) and generates an executable file named `a.out`.

3. **Run the program:** Execute the generated program using the following command:

```bash
./a.out
```

The output will be:

```
Hello there :D
```

**Explanation (commented code):**

The provided code includes a `main` function that demonstrates how to use the `ft_putstr` function. Here's a breakdown (considering the `write` version):

- Declares a character array `str` and initializes it with a string literal.
- Calls the `ft_putstr` function, passing the address of `str` (which points to the first character of the string).
- The `ft_putstr` function iterates through the characters of `str` using a loop.
  - Inside the loop, it uses `write(1, &str[i], 1)` to write the character at index `i` of `str` to the standard output (file descriptor 1, which typically refers to the console).

**Key Points:**

- The `ft_putstr` function assumes a null-terminated string (`\0` at the end).
- This code demonstrates a low-level approach using `write`.

This documentation explains the functionality of `ft_putstr` for printing strings, addresses the header consideration, and provides instructions for compiling and running the code on Unix-like systems with `write` approache.