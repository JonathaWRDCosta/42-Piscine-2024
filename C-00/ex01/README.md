# Documentation for ft_print_alphabet.c

**Description**: This code defines a function called `ft_print_alphabet` that prints the lowercase alphabet to the standard output.

### Running the code:

1. **Save the code**: Create a file named `ft_print_alphabet.c` and paste the code provided.
2. **Compile the code**: You will need a C compiler like GCC. Open a terminal and navigate to the directory where you saved the file. Then, run the following command:

  ```
  cc -Wall -Wextra -Werror *.c
  ```
  This will create an executable file named `a.out`.

3. **Run the program**: Execute the compiled program by typing the following command in the terminal:
  ```ruby
  ./a.out
 ```
 This will print the lowercase alphabet to the terminal.

### Explanation:

- `#include <unistd.h>`: This line includes the `unistd.h` header file, which provides access to various POSIX operating system functionalities.
- `void ft_print_alphabet(void)`: This line defines a function named `ft_print_alphabet` that takes no arguments (indicated by `void`) and doesn't return any value (also indicated by `void`).
- `int a;`: This line declares an integer variable named `a`.
- `a = 97;`: This line assigns the value 97 to the variable `a`. The value 97 corresponds to the ASCII code for the lowercase letter 'a'.
- `while (a <= 122)`: This line starts a `while` loop that continues as long as the value of `a` is less than or equal to 122. The value 122 corresponds to the ASCII code for the lowercase letter 'z'.
- `write(1, &a, 1);`: This line uses the `write` function from the `unistd.h` header. It writes one byte of data from the memory location of `a` (which contains the ASCII code for a lowercase letter) to standard output (indicated by file descriptor 1).
- `a++;`: This line increments the value of `a` by 1. This effectively moves to the next lowercase letter in the ASCII table.
- The `while` loop continues iterating, printing characters to the standard output until the condition `a <= 122` is no longer true.

This code demonstrates a simple way to iterate through the lowercase alphabet and print the characters using the `write` function.

### Additional Notes:

This code assumes the standard ASCII character encoding.