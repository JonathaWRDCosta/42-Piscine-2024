## Documentation for `ft_strcpy` and Example Usage

This document explains the code for the function `ft_strcpy` and how to run it on your local machine.

**Functionality:**

The `ft_strcpy` function copies a string (`src`) to another string (`dest`). It iterates through the characters of the source string (`src`) until it encounters the null terminator (`\0`). For each character, it copies it to the corresponding position in the destination string (`dest`). Finally, it adds the null terminator to the end of the destination string to mark the string's end.

**Key Points:**

- The destination string (`dest`) must have enough space to hold the entire copied string, including the null terminator. Otherwise, it might lead to buffer overflows and undefined behavior.
- The function returns a pointer to the destination string (`dest`).

**Example Usage:**

The provided code demonstrates how to use `ft_strcpy`:

1. **Declares two character arrays:**
   - `str` is a string literal initialized with "Hello there :D\n".
   - `str2` is an empty character array. Its size is dynamically calculated using `ft_strlen(str) + 1` to ensure enough space for the entire copied string, including the null terminator.

2. **Prints the original string (`str`) before copying.**

3. **Calls `ft_strcpy` to copy the contents of `str` to `str2`.**

4. **Prints the copied string (`str2`) after the function call.**

**Compiling and Running the Code:**

1. **Save the code:** Create a file named `ft_strcpy_example.c` and paste the following code snippet:

```c
#include <stdio.h>

char *ft_strcpy(char *dest, char *src)
{
  int i;
  i = 0;
  while (src[i] != '\0')
  {
    dest[i] = src[i];
    i++;
  }
  dest[i] = '\0';
  return(dest);
}

int ft_strlen(char *str)
{
  int i;

  i = 0;
  while (str[i] != '\0')
  {
    i++;
  }
  return (i);
}

int main()
{
  char str[] = "Hello there :D\n";
  char str2[ft_strlen(str) + 1];

  printf("Before call ft_strcpy: %s", str);
  ft_strcpy(str2, str);
  printf("After call ft_strcpy: %s", str2);

  return (0);
}
```

2. **Compile the code:** Open a terminal and navigate to the directory where you saved `ft_strcpy_example.c`. Compile the code using the following command, replacing `FILENAME` with the actual filename if it's different:

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
Before call ft_strcpy: Hello there :D
After call ft_strcpy: Hello there :D
```

This shows that the string `str` has been successfully copied to `str2`.