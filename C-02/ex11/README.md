## Documentation for ft_putstr_non_printable

This document explains the `ft_putstr_non_printable` function, which prints a string with non-printable characters replaced by their hexadecimal representations.

**Functionality:**

The `ft_putstr_non_printable` function takes a null-terminated character array (`str`) as input and iterates through each character. It replaces non-printable characters (control characters, extended characters) with their hexadecimal representations and prints the resulting string.

**Parameters:**

- `str`: A pointer to the character array (string) to be evaluated.

**Behavior:**

The function uses a `while` loop to process each character in the string `str` until the null terminator (`\0`) is encountered. Inside the loop:

- An `if` statement checks if the current character's ASCII value falls outside the range of printable characters (generally considered 32 to 127, which includes space, visible characters, and some formatting characters).
    - If the character is non-printable, the function calls `ft_print_hex` (assumed to be defined elsewhere) to print its hexadecimal representation (`\x` followed by two hex digits).
    - `ft_print_hex` breaks down the character's ASCII value into hexadecimal digits and prints them using `ft_putchar` (also assumed to be defined elsewhere).
- If the character is printable (visible character, space, common formatting character), it is printed directly using `ft_putchar`.

**Key Points:**

- This function is useful for debugging or printing strings that may contain non-printable characters that would not display correctly on the console.
- Refer to an ASCII table to see the exact range of printable characters (usually 32 to 127).

**Example Usage:**

The provided commented code in the `main` function demonstrates how to use `ft_putstr_non_printable`:

```c
char string[] = "This is an example string\twith a tab and \x0Anewline character.";

printf("Testing with ft_putstr_non_printable:\n");  // We can keep printf here for this message

printf("Original string: \"%s\"\n", string);
ft_putstr_non_printable(string);
```

This code will output:

```
Testing with ft_putstr_non_printable:
Original string: "This is an example string     with a tab and 
newline character."
This is an example string\09with a tab and \0anewline character.% 
```

The non-printable character `BEL` (alert or beep) is replaced with its hexadecimal representation `\07`.

**Compiling and Running the Code (assuming `ft_putchar` and `ft_print_hex` are part of a custom library):**

1. Save the code in a file named `ft_putstr_non_printable_example.c`.
2. Compile the code using a command like:

```bash
cc -Wall -Wextra -Werror *.c
```

3. Run the program:

```bash
./a.out
```

This will print the modified string with non-printable characters replaced by their hexadecimal representations.