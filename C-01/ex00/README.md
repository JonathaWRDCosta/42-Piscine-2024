## Documentation for `ft_ft`

This document explains the code for the function `ft_ft` and how to run it on your local machine.

**Functionality:**

The `ft_ft` function takes a pointer to an integer as input and modifies the value of the integer it points to. Inside the function, the value at the memory location pointed to by the argument is directly changed to 42.

**Compiling and Running the Code:**

1. **Save the code:** Create a file named `ft_ft.c` and paste the following code snippet:

```c
#include <stdio.h>

void ft_ft(int *nbr)
{
  *nbr = 42;
}
```

2. **Compile the code:** Open a terminal and navigate to the directory where you saved `ft_ft.c`. Compile the code using the following command, replacing `FILENAME` with the actual filename if it's different:

```bash
cc -Wall -Wextra -Werror *.c
```

This command compiles the C code with the flags you provided (`-Wall`, `-Wextra`, and `-Werror`) and generates an executable file named `a.out`.

3. **Run the program:** Execute the generated program using the following command:

```bash
./a.out
```

**Explanation (commented code):**

The provided code includes a `main` function but is commented out. This function demonstrates how to use the `ft_ft` function. When uncommented, it would:

- Declare an integer variable `i` and initialize it with the value 21.
- Print the initial value of `i`.
- Call the `ft_ft` function, passing the address of `i` (using the `&` operator).
- Print the value of `i` again after the function call.

**Note:**

The commented-out `main` function is useful for testing the `ft_ft` function. You can uncomment it and run the program to see how the value of `i` changes after the function call.

This documentation provides a clear understanding of the `ft_ft` function, its functionality, and how to compile and run it on your local machine following your preferred compilation flags.