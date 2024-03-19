## Documentation for `ft_swap`

This document explains the code for the function `ft_swap` and how to run it on your local machine.

**Functionality:**

The `ft_swap` function takes two pointers to integers (`a` and `b`) as input and swaps the values of the integers they point to. This function effectively exchanges the values between two integer variables.

**Compiling and Running the Code:**

1. **Save the code:** Create a file named `ft_swap.c` and paste the following code snippet:

```c
#include <stdio.h>

void ft_swap(int *a, int *b)
{
  int i;

  i = *a;
  *a = *b;
  *b = i;
}

/*
int main(void)
{
  int a;
  int b;

  a = 21;
  b = 42;

  printf("--- Before call the funcion ---\n");
  printf("A: %d || B: %d\n", a, b);
  ft_swap(&a, &b);
  printf("--- After call the funcion ---\n");
  printf("A: %d || B: %d\n", a, b);
}
*/
```

2. **Compile the code:** Open a terminal and navigate to the directory where you saved `ft_swap.c`. Compile the code using the following command, replacing `FILENAME` with the actual filename if it's different:

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
--- Before call the funcion ---
A: 21 || B: 42
--- After call the funcion ---
A: 42 || B: 21
```

This demonstrates that the values of `a` and `b` have been swapped after calling the `ft_swap` function.

**Explanation (commented code):**

The provided code includes a `main` function that is used to test the `ft_swap` function. Here's a breakdown of what the code does:

- Declares two integer variables `a` and `b` and initializes them with values 21 and 42, respectively.
- Prints the initial values of `a` and `b`.
- Calls the `ft_swap` function, passing the addresses of `a` and `b` (using the `&` operator). This provides the function with access to the memory locations where the values of `a` and `b` are stored.
- Prints the values of `a` and `b` again after the function call. The output shows that the values have been swapped.

**Key Points:**

- The `ft_swap` function uses a temporary variable `i` to hold the value of `a` while swapping it with the value of `b`.
- This function modifies the original values of `a` and `b` through the pointers.

This documentation provides a clear understanding of the `ft_swap` function, its functionality for swapping integer values, and how to compile and run the code to verify its behavior.