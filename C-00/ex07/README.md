## Documentation for `ft_putnbr.c`

This document covers the source code for three functions, `ft_putchar`, `ft_putnbr`, compiled using the command `cc -Wall -Wextra -Werror *.c`.

**Functionality**

The code provides functions to handle integer output:

1. `ft_putchar(char c)`: A simple function that prints a single character `c` to the console.
2. `ft_putnbr(int nb)`: This is the core function. It prints a given integer `nb` to the standard output (console). It can handle positive, negative numbers, and the minimum negative integer value (`-2147483648`).

**Explanation**

1. **Compilation Instruction:**
   - The provided compilation instruction is: `cc -Wall -Wextra -Werror *.c`
     - This instructs the C compiler (`cc`) to compile all C source files (`.c` files) in the current directory.
     - The flags used are for informative compilation:
        - `-Wall`: Enables most compiler warnings.
        - `-Wextra`: Enables additional helpful warnings.
        - `-Werror`: Treats warnings as errors, halting compilation if any arise.
     - This will create an executable file named `a.out` by default.

2. **Code Breakdown:**

   - **`ft_putchar` Function:** (Refer to previous documentation for details)

   - **`ft_putnbr` Function:**
     - `if(nb == -2147483648)`: This line is a special case for the minimum negative integer. It directly prints it using `write` as it cannot be represented through recursion due to integer overflow during division by 10.
     - `if (nb >= 0 && nb <= 9)`: This checks if `nb` is between 0 and 9 (inclusive). If so, it's a single-digit number and is printed directly as a character using `ft_putchar(nb + '0')`. Adding `nb` to '0' converts the integer value to its corresponding ASCII code for the digit character.
     - `else if(nb > 9)`: If `nb` is greater than 9 (multi-digit), it's handled recursively.
       - `ft_putnbr(nb / 10);`: This recursive call prints the higher-order digits (quotient) by dividing `nb` by 10.
       - `ft_putnbr(nb % 10);`: This recursive call prints the lower-order digit (remainder) using the modulo operator (`%`).
     - `else if(nb < 0)`: This handles negative numbers.
       - `ft_putchar('-');`: Prints a minus sign.
       - `ft_putnbr(nb * -1);`: Negates `nb` and calls `ft_putnbr` recursively to print the absolute value. 

**Running the Code**

1. Save the code as a file named `ft_putnbr.c`.
2. Open a terminal window and navigate to the directory where you saved the file.
3. Compile the code using the provided command:

   ```bash
   cc -Wall -Wextra -Werror *.c
   ```

4. Run the program by typing:

   ```bash
   ./a.out
   ```

   - This will execute the `ft_putnbr` function, printing the value passed in `main` (e.g., if `main` has `ft_putnbr(42);`, it will print `42` to the console followed by a newline).

This documentation provides a basic explanation of the code and how to run it. Remember to consider error handling and expand functionality based on your specific programming needs.