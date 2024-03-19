## Documentation for `ft_ultimate_ft`

This document explains the code for the function `ft_ultimate_ft` and how to run it on your local machine.

**Functionality:**

The `ft_ultimate_ft` function takes a pointer to an integer that goes through nine levels of indirection as input. It attempts to modify the value of the integer pointed to by this complex pointer. However, in most C implementations, this function likely has no effect on the original `i` variable.

**Reasoning:**

C doesn't support modifying variables through pointers with this many levels of indirection. The compiler typically treats such constructs as warnings or errors depending on the compilation flags used.

**Compiling and Running the Code (for educational purposes):**

1. **Save the code:** Create a file named `ft_ultimate_ft.c` and paste the following code snippet:

```c
#include <stdio.h>

void ft_ultimate_ft(int *********nbr)
{
  *********nbr = 42;
}

/*
int main(void)
{
  int i;
  
  i = 21;
  int *pI1 = &i;
  int **pI2 = &pI1;
  int ***pI3 = &pI2;
  int ****pI4 = &pI3;
  int *****pI5 = &pI4;
  int ******pI6 = &pI5;
  int *******pI7 = &pI6;
  int ********pI8 = &pI7;
  int *********pI9 = &pI8;
  printf("---Valor de (i) antes de chamar a função---\n");
  printf("%d\n", i);
  ft_ultimate_ft(pI9);
  printf("---Valor de (i) depois de chamar a função---\n");
  printf("%d\n", i);
}
*/
```

2. **Compile the code:** Open a terminal and navigate to the directory where you saved `ft_ultimate_ft.c`. Compile the code using the following command, replacing `FILENAME` with the actual filename if it's different:

```bash
cc -Wall -Wextra -Werror *.c
```

This command compiles the C code with the flags you provided (`-Wall`, `-Wextra`, and `-Werror`) and generates an executable file named `a.out`.

3. **Run the program (expect warnings):** Execute the generated program using the following command:

```bash
./a.out
```

The compilation will likely produce warnings related to the excessive levels of indirection in `ft_ultimate_ft`. The program output might not show any change in the value of `i` because the modification attempt through too many indirection levels might not be achieved.

**Explanation (commented code):**

The provided code includes a `main` function but is commented out. This function demonstrates how to use the `ft_ultimate_ft` function in a way that is unlikely to work as expected due to the extreme levels of indirection. When uncommented, it would:

- Declare an integer variable `i` and initialize it with the value 21.
- Print the initial value of `i`.
- Create a chain of nine integer pointers, each pointing to the memory location of the previous pointer.
- Call the `ft_ultimate_ft` function, passing the last pointer in the chain (`pI9`).
- Print the value of `i` again after the function call (likely unchanged).

**Note:**

The commented-out `main` function is for illustrative purposes only. In practice, using this many levels of indirection is not recommended.

This documentation provides a clear understanding of the `ft_ultimate_ft` function, its limitations due to excessive indirection, and how to compile and run the code for educational purposes.