## Documentation for `ft_print_comb.c`

This document covers the source code for two functions, `ft_putchar` and `ft_print_comb`, compiled using the command `cc -Wall -Wextra -Werror *.c`.

**Functionality**

The code provides two functions:

1. `ft_putchar(char c)`: This function takes a character `c` as input and prints it to the standard output (console).
2. `ft_print_comb(void)`: This function prints all possible combinations of three distinct digits (from 0 to 9) in ascending order without repetition, separated by commas and spaces.

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
     - `#include <unistd.h>`: This line includes the standard POSIX library for operating system functions. The `write` function used is defined here.
     - `void ft_putchar(char c)`: This declares a function named `ft_putchar` that takes a character argument `c` and doesn't return any value (`void`).
     - `write(1, &c, 1);`: This line uses the `write` function to print the character `c` to the standard output.

   - **`ft_print_comb` Function:**
     - `int a; int b; int c;`: These lines declare three integer variables `a`, `b`, and `c`.
     - `a = 0;`: Initializes `a` to 0 (representing the first digit).
     - `while (a <= 7)`: This `while` loop iterates as long as `a` is less than or equal to 7 (to print digits from 0 to 7).
       - `b = a + 1;`: Initializes `b` to the value after `a` (second digit).
       - `while (b <= 8)`: This nested `while` loop iterates as long as `b` is less than or equal to 8 (to ensure the second digit is greater than the first).
         - `c = b + 1;`: Initializes `c` to the value after `b` (third digit).
         - `while (c <= 9)`: This nested `while` loop iterates as long as `c` is less than or equal to 9 (to ensure the third digit is greater than the second).
           - The following lines within this loop print the current combination of digits:
             - `ft_putchar(a + '0'); ft_putchar(b + '0'); ft_putchar(c + '0');`: These lines use `ft_putchar` to print the characters representing the values of `a`, `b`, and `c` by adding their values to '0' (ASCII value of '0').
             - `if (a != 7 || b != 8 || c != 9)`: This `if` statement checks if the current combination is not the last one (7, 8, 9).
               - `write(1, ", ", 2);`: If not the last combination, a comma and space are printed for separation.
           - `c++;`: Increments `c` to move on to the next possible third digit.
         - `b++;`: Increments `b` to move on to the next possible second digit.
       - `a++;`: Increments `a` to move on to the next possible first digit.

**Running the Code**

1. Save the code as a file named `ft_print_comb.c`.
2. Open a terminal window and navigate to the directory where you saved the file.
3. Compile the code using the provided command:

   ```bash
   cc -Wall -Wextra -Werror *.c
   ```


4. Run the program by typing:
      ```bash
      ./a.out
      ```

This will execute the `ft_print_comb` function and print all possible combinations of three distinct digits from 0 to 9 in **ascending order** without repetition. Each combination will be separated by commas and spaces.

**Example Output:**

```
012, 013, 014, 015, 016, 017, 018, 019, 023, 024, 025, 026, 027, 028, 029, ... (continues until all combinations are printed)
```

This rewrite clarifies the following:

* **Output order:** The digits appear in ascending order (e.g., 012, not 102).
* **No repetition:** Each combination uses unique digits (e.g., 012, not 120).
* **Separation:** Commas and spaces separate the combinations.
* **Example output:** Provides a glimpse of what the program might print.
