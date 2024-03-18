## Documentation for `ft_print_comb2.c`

This document covers the source code for two functions, `ft_putchar` and `ft_print_comb2`, compiled using the command `cc -Wall -Wextra -Werror *.c`.

**Functionality**

The code provides two functions:

1. `ft_putchar(char c)`: This function takes a character `c` as input and prints it to the standard output (console).
2. `ft_print_comb2(void)`: This function prints all possible combinations of two distinct digits (from 0 to 9) in ascending order without repetition, separated by commas and spaces. Unlike `ft_print_comb`, each digit can appear only once in a pair (e.g., 12 but not 21).

**Explanation**

1. **Compilation Instruction:**
   - The provided compilation instruction is: `cc -Wall -Wextra -Werror *.c`
     - This command instructs the C compiler (`cc`) to compile all C source files (`.c` files) in the current directory.
     - The flags used are:
        - `-Wall`: Enables most warnings from the compiler.
        - `-Wextra`: Enables additional warnings that might be helpful.
        - `-Werror`: Treats all warnings as errors, causing the compilation to fail if any warnings are found.
     - This will create an executable file named `a.out` by default.

2. **Code Breakdown:**

   - **`ft_putchar` Function:**
     - Refer to the previous documentation for `ft_putchar`.

   - **`ft_print_comb2` Function:**
     - `int a; int b;`: These lines declare two integer variables `a` and `b` for the digits.
     - `a = 0;`: Initializes `a` to 0 (representing the first digit).
     - `while (a <= 98)`: This `while` loop iterates as long as `a` is less than or equal to 98 (to avoid duplicate pairs like 99).
       - `b = a + 1;`: Initializes `b` to the value after `a` (second digit).
       - `while (b <= 99)`: This nested `while` loop iterates as long as `b` is less than or equal to 99.
         - The following lines within this loop print the current digit pair:
           - `ft_putchar(a / 10 + '0'); ft_putchar(a % 10 + '0');`: These lines print the tens and units digits of `a` separately using arithmetic and character conversion.
           - `ft_putchar(' ');`: Prints a space for separation.
           - `ft_putchar(b / 10 + '0'); ft_putchar(b % 10 + '0');`: Similar to above, prints the tens and units digits of `b`.
           - `if (a != 98 || b != 99)`: This `if` statement checks if the current combination is not the last one (98, 99).
             - `ft_putchar(','); ft_putchar(' ');`: If not the last pair, a comma and space are printed for separation.
         - `b++;`: Increments `b` to move on to the next possible second digit.
       - `a++;`: Increments `a` to move on to the next possible first digit (but ensures `a` doesn't become the second digit in the next iteration).

**Running the Code**

1. Save the code as a file named `ft_print_comb2.c`.
2. Open a terminal window and navigate to the directory where you saved the file.
3. Compile the code using the provided command:

   ```bash
   cc -Wall -Wextra -Werror *.c
   ```

4. Run the program by typing:

   ```bash
   ./a.out
   ```

   - This will execute the `ft_print_comb2` function and print all possible combinations of two distinct digits from 0 to 9 in ascending order, separated by commas and spaces.

This documentation provides a basic explanation of the code and how to run it. Remember to consider error handling and expand functionality based on your specific programming needs.