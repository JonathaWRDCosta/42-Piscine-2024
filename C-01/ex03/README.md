## Documentation for `ft_div_mod`

This document explains the code for the function `ft_div_mod` and how to run it on your local machine.

**Functionality:**

The `ft_div_mod` function takes two integers (`a` and `b`) and two pointers to integers (`div` and `mod`) as input. It calculates the division and modulo of `a` by `b` and stores the results in the memory locations pointed to by `div` and `mod` respectively.

**Compiling and Running the Code:**

1. **Save the code:** Create a file named `ft_div_mod.c` and paste the following code snippet:

```c
#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
  *div = a / b;
  *mod = a % b;
}

/*
int main(void)
{  
  int a;
  int b;
  int div;
  int mod;

  a = 21;
  b = 42;

  ft_div_mod(a, b, &div, &mod);
  printf("%d\n", div);
  printf("%d\n", mod);
}
*/
```

2. **Compile the code:** Open a terminal and navigate to the directory where you saved `ft_div_mod.c`. Compile the code using the following command, replacing `FILENAME` with the actual filename if it's different:

```bash
cc -Wall -Wextra -Werror *.c
```

This command compiles the C code with the flags you provided (`-Wall`, `-Wextra`, and `-Werror`) and generates an executable file named `a.out`.

3. **Run the program:** Execute the generated program using the following command:

```bash
./a.out
```

The output will depend on the values of `a` and `b` provided in the `main` function. For example, with `a = 21` and `b = 42`, the output would be:

```
0
21
```

This shows that the quotient (division) is 0 and the remainder (modulo) is 21.

**Explanation (commented code):**

The provided code includes a `main` function that demonstrates how to use the `ft_div_mod` function. Here's a breakdown:

- Declares four integer variables: `a`, `b`, `div`, and `mod`.
- Initializes `a` and `b` with desired values.
- Calls the `ft_div_mod` function, passing `a`, `b`, the address of `div`, and the address of `mod`.
- Prints the values stored in `div` and `mod` after the function call. These values represent the quotient and remainder, respectively.

**Key Points:**

- The `ft_div_mod` function performs the division and modulo operations but doesn't return any value itself. It modifies the values at memory locations pointed to by the provided pointers.
- Ensure `b` (the divisor) is not zero to avoid division by zero errors.

This documentation explains the purpose of `ft_div_mod`, how it calculates division and modulo, and how to compile and run the code to test its functionality.