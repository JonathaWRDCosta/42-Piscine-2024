## Documentation for `ft_ultimate_div_mod`

This document explains the code for the function `ft_ultimate_div_mod` and how to run it on your local machine.

**Functionality:**

The `ft_ultimate_div_mod` function takes pointers to two integers (`a` and `b`) as input. It performs both division and modulo operations and modifies the values at the memory locations pointed to by these pointers. Specifically:

- It calculates the quotient (division) of `*a` by `*b` and stores the result in the memory location pointed to by `a`.
- It calculates the remainder (modulo) of `*a` divided by `*b` and stores the result in the memory location pointed to by `b`.

**Important Note:**

This function modifies the original values of `a` and `b` through the pointers. It does not return any value itself.

**Compiling and Running the Code:**

1. **Save the code:** Create a file named `ft_ultimate_div_mod.c` and paste the following code snippet:

```c
#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b)
{
  int tmp;
  tmp = *a;
  *a = *a / *b;
  *b = tmp % *b;
}

/*
int main(void)
{
  int a;
  int b;

  a = 21;
  b = 42;
  ft_ultimate_div_mod(&a, &b);
  printf("%d\n", a);
  printf("%d\n", b);
}
*/
```

2. **Compile the code:** Open a terminal and navigate to the directory where you saved `ft_ultimate_div_mod.c`. Compile the code using the following command, replacing `FILENAME` with the actual filename if it's different:

```bash
cc -Wall -Wextra -Werror *.c
```

This command compiles the C code with the flags you provided (`-Wall`, `-Wextra`, and `-Werror`) and generates an executable file named `a.out`.

3. **Run the program:** Execute the generated program using the following command:

```bash
./a.out
```

The output will depend on the initial values of `a` and `b`. For example, with `a = 21` and `b = 42`, the output would be:

```
0
21
```

This shows that the value of `a` is modified to hold the quotient (0 in this case) and the value of `b` is modified to hold the remainder (21).

**Explanation (commented code):**

The provided code includes a `main` function that demonstrates how to use the `ft_ultimate_div_mod` function. Here's a breakdown:

- Declares two integer variables `a` and `b` and initializes them with values.
- Calls the `ft_ultimate_div_mod` function, passing the addresses of `a` and `b`.
- Prints the values of `a` and `b` after the function call. These values will be modified to reflect the quotient and remainder.

**Key Points:**

- Ensure `*b` (the divisor) is not zero to avoid division by zero errors.
- This function is designed to modify the original values pointed to by `a` and `b`.

This documentation explains the purpose of `ft_ultimate_div_mod`, its divide-and-modulo functionality, and how to compile and run the code to observe its behavior.