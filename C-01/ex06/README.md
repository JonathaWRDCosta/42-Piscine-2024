## Documentation for `ft_strlen`

This document explains the code for the function `ft_strlen` and how to run it on your local machine.

**Functionality:**

The `ft_strlen` function takes a character pointer (`str`) as input, which points to a null-terminated string. It iterates through the string character by character until it encounters the null terminator (`\0`). The function counts the number of characters (excluding the null terminator) and returns this count as the string length.

**Compiling and Running the Code:**

1. **Save the code:** Create a file named `ft_strlen.c` and paste the following code snippet:

```c
#include <stdio.h>

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

/*
int main(void)
{
  char str[] = "ABC";
  printf("%d", ft_strlen(str));
}
*/
```
2. **Compile the code:** Open a terminal and navigate to the directory where you saved `ft_strlen.c`. Compile the code using the following command, replacing `FILENAME` with the actual filename if it's different:

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
3
```

This shows that the string "ABC" has a length of 3 characters (excluding the null terminator).

**Explanation (commented code):**

The provided code includes a `main` function that demonstrates how to use the `ft_strlen` function. Here's a breakdown:

- Declares a character array `str` and initializes it with a string literal "ABC".
- Calls the `ft_strlen` function, passing the address of `str` (which points to the first character of the string).
- The `ft_strlen` function uses a loop to iterate through the characters of `str`.
  - Inside the loop, it checks if the current character is the null terminator (`\0`). If not, the loop counter `i` is incremented.
- After the loop, the function returns the value of `i`, which represents the number of characters before the null terminator.
- The `main` function then prints the returned length using `printf`.

**Key Points:**

- The `ft_strlen` function is a commonly used function in C for determining the length of a null-terminated string.
- It's important to pass the address of the string (pointer) to the function, not the string literal itself.

This documentation provides a clear understanding of `ft_strlen`, its functionality for calculating string length, and how to compile and run the code to verify its behavior.