## Documentation for `ft_putnbr`

This document explains the code for the function `ft_putnbr` and how it works. It assumes you're familiar with basic C concepts like loops and recursion.

**Functionality:**

The `ft_putnbr` function takes an integer (`nb`) as input and prints it to the standard output (typically the console). It handles both positive and negative numbers, including the special case of the minimum representable integer (`-2147483648`).

**Logic Breakdown:**

The function uses a combination of conditional statements and recursion (calling itself) to achieve its functionality. Here's a breakdown of the logic:

1. **Handling Minimum Integer:**
   - If `nb` is equal to `-2147483648` (the most negative integer in a 32-bit signed integer system), it directly writes the string "-2147483648" to the standard output using `write`. This is a special case because standard integer to character conversion might not handle this value correctly.

2. **Handling Single-Digit Numbers (0-9):**
   - If `nb` is between 0 and 9 (inclusive), it adds `'0'` (ASCII value of character '0') to `nb` and prints the resulting character using `ft_putchar`. This effectively converts the integer digit to its corresponding ASCII character for printing.

3. **Handling Multi-Digit Numbers (Recursive Approach):**
   - If `nb` is greater than 9 (positive or negative), the function uses recursion:
      - It calls itself (`ft_putnbr(nb / 10)`) to print the higher-order digits of `nb` (obtained by integer division by 10).
      - Then, it calls itself again (`ft_putnbr(nb % 10)`) to print the lower-order digit (obtained by the modulo operation with 10).

4. **Handling Negative Numbers:**
   - If `nb` is negative, the function first prints a minus sign (`'-'` character) using `ft_putchar`.
   - Then, it calls itself recursively with the absolute value of `nb` (`ft_putnbr(nb * -1)`) to handle the remaining logic as a positive number.

**Compiling and Running the Code:**

1. **Save the code:** Create a file named `ft_putstr.c` and paste the following code snippet:

```c
#include <stdio.h>

void ft_putchar(char c)
{
  write(1, &c, 1);
}

void ft_putnbr(int nb)
{
  if(nb == -2147483648)
  {
    write(1, "-2147483648", 11);
  }
  else if(nb >= 0 && nb <= 9)
  {
    ft_putchar(nb + '0');
  }
  else if(nb > 9)
  {
    ft_putnbr(nb / 10);
    ft_putnbr(nb % 10);
  }
  else
  {
    ft_putchar('-');
    ft_putnbr(nb * -1);
  }
}


/*
int main() {

  ft_putnbr(42);
  ft_putchar('\n');
  return (0);
}

*/
```

1. **Compile the code:** Open a terminal and navigate to the directory where you saved `ft_putnbr.c`. Compile the code using the following command:

```bash
cc -Wall -Wextra -Werror *.c
```

This command compiles the C code with the flags you provided (`-Wall`, `-Wextra`, and `-Werror`) and generates an executable file named `a.out`.

3. **Run the program:** Execute the generated program using the following command:

```bash
./a.out
```

**Example:**

Consider printing the number 12345. Here's how the logic unfolds:

1. `nb` is greater than 9, so recursion is used.
2. First, `ft_putnbr(12345 / 10)` is called, which prints the higher-order digits (1234).
3. Then, `ft_putnbr(12345 % 10)` is called, which prints the lower-order digit (5).

**Compiling and Running the Code:**

This code snippet assumes the presence of the `ft_putchar` function (defined earlier). You can compile and run it similarly to the previous example using `stdio.h` instead of `unistd.h`.

**Key Points:**

- `ft_putnbr` uses recursion to efficiently handle multi-digit numbers.
- It considers the special case of the minimum integer for accurate output.
- This explanation assumes basic understanding of C concepts like integer division and modulo operation.
