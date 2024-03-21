## Documentation for `ft_str_is_printable`

This document explains the `ft_str_is_printable` function, which checks if a string consists only of printable characters.

**Functionality:**

The `ft_str_is_printable` function takes a character pointer (`str`) as input and determines if all characters in the string are printable characters. In this context, printable characters include visible characters (letters, numbers, symbols) and standard formatting characters like space, newline, tab, etc.

**Parameters:**

- `str`: A pointer to the null-terminated character array (string) to be evaluated.

**Return Value:**

- The function returns:
    - 1 (integer value one) if the string contains only printable characters.
    - 0 (integer value zero) if the string contains any non-printable characters (control characters, extended characters).

**Behavior:**

The function iterates through each character in the string using a `while` loop that continues as long as the current character (`str[i]`) is not the null terminator (`\0`). Inside the loop:

- An `if` statement checks if the current character's ASCII value falls within the range of printable characters (generally considered 32 to 127, which includes space, visible characters, and some formatting characters).
    - If the character is printable, the loop continues to the next character (`i++`).
    - If the character is not printable (control character, extended character), the function immediately returns 0, indicating a non-printable string.

**Key Points:**

- The function considers a wider range of characters printable compared to functions like `ft_str_is_alpha` or `ft_str_is_numeric`. It includes characters like space, tab, newline, etc.
- Refer to an ASCII table to see the exact range of printable characters (usually 32 to 127).

**Example Usage:**

The provided commented code in the `main` function demonstrates how to use `ft_str_is_printable` with various test strings:

```c
char str1[] = "123";        // Output: 1 (printable)
char str2[] = "\n\0\t";     // Output: 1 (printable - includes formatting characters)
char str3[] = "abc\n";      // Output: 1 (printable)
char str4[] = "";           // Output: 1 (empty string is considered printable)
```

**Compiling and Running the Code (assuming `ft_str_is_printable` is part of a custom library):**

1. Save the code in a file named `ft_str_is_printable_example.c`.
2. Compile the code using a command like:

```bash
cc -Wall -Wextra -Werror *.c
```

3. Run the program:

```bash
./a.out
```

This will print the results of `ft_str_is_printable` for the provided test strings.