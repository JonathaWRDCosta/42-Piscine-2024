## Documentation for `ft_strncpy` and `ft_strlen`

This document explains the functionalities of the functions `ft_strncpy` and `ft_strlen` and provides instructions on how to run the provided code on your local machine.

**Functions:**

- `ft_strncpy`: This function copies a specified number of characters from a source string to a destination string.
- `ft_strlen`: This function calculates the length of a null-terminated string.

**Compiling and Running the Code:**

1. **Save the code:** Create a file named `ft_strncpy_example.c` and paste the following code snippet:

```c
//#include <stdio.h>

char *ft_strncpy(char *dest, char *src, int n)
{
  int i;

  i = 0;
  while (i < n)
  {
    if (src[i] != '\0')
    {
      dest[i] = src[i];
      i++;
    }
    else
    {
      dest[i] = '\0';
      i++;
    } 
  }
  return (dest);
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


/*

int main()
{
  char src[] = "Hello";
  char dest[] = "World1";
  int n = 3;

  ft_strncpy(dest, src, n);
  printf("--Teste--\n");
  printf("str1: %s\n", src);
  printf("str2: %s\n", dest);
  // printf("str3: %s\n", str3);

  char str1[] = "42 here I go";
  char str2[ft_strlen(str1) + 1];
  char str3[ft_strlen(str1) + 1];

  printf("--Before call the function--\n");
  printf("str1: %s\n", str1);
  printf("str2: %s\n", str2);
  printf("str3: %s\n", str3);

  ft_strncpy(str2, str1, ft_strlen(str1));
  printf("--After call the function full size str1 to str2--\n");
  printf("str1: %s\n", str1);
  printf("str2: %s\n", str2);
  printf("str3: %s\n", str3);
  
  ft_strncpy(str3, str2, 7);
  printf("--After call the function limited size str2 to str3--\n");
  printf("str1: %s\n", str1);
  printf("str2: %s\n", str2);
  printf("str3: %s\n", str3);
}*/
```

2. **Open a terminal:** Navigate to the directory where you saved `ft_strncpy_example.c`.

3. **Compile the code:** Use the following command, replacing `FILENAME` with the actual filename if it's different:

```bash
cc -Wall -Wextra -Werror *.c FILENAME.c -o a.out
```

This command compiles the C code with the flags you provided (`-Wall`, `-Wextra`, and `-Werror`) and generates an executable file named `a.out`.

4. **Run the program:** Execute the generated program using the following command:

```bash
./a.out
```

The output will demonstrate how the functions are used and the results of copying strings.

**Explanation of the Code:**

**`ft_strncpy` Function:**

- **Functionality:** Copies a specified number of characters (`n`) from the source string (`src`) to the destination string (`dest`).
- **Parameters:**
    - `dest`: Pointer to the destination character array where the copied string will be stored.
    - `src`: Pointer to the source character array containing the string to be copied.
    - `n`: An integer specifying the maximum number of characters to copy from the source string.
- **Return Value:** Returns a pointer to the destination string (`dest`).
- **Key Points:**
    - The destination string (`dest`) must have enough space to hold at least `n + 1` characters (including the null terminator).
    - If `n` is less than or equal to zero, the function does nothing (no characters are copied).

**`ft_strlen` Function:**

- **Functionality:** Calculates the length of a null-terminated string (`str`).
- **Parameter:** `str`: Pointer to the character array whose length needs to be determined.
- **Return Value:** Returns the length of the string (excluding the null terminator).

**The provided `main` function showcases how to use these functions for various scenarios of string copying with different values of `n`.** 