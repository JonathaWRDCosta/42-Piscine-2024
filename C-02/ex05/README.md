## Documentation for `ft_str_is_uppercase`

This document explains the `ft_str_is_uppercase` function, which checks if a string consists only of uppercase characters (A-Z).

**Functionality:**

The `ft_str_is_uppercase` function takes a character pointer (`str`) as input and determines if all characters in the string are uppercase letters.

**Parameters:**

- `str`: A pointer to the null-terminated character array (string) to be evaluated.

**Return Value:**

- The function returns:
    - 1 (integer value one) if the string contains only uppercase characters (A-Z).
    - 0 (integer value zero) if the string contains any non-uppercase characters.

**Behavior:**

The function iterates through each character in the string using a `while` loop that continues as long as the current character (`str[i]`) is not the null terminator (`\0`). Inside the loop:

- An `if` statement checks if the current character's ASCII value falls within the range of uppercase letters (65 to 90).
    - If the character is uppercase, the loop continues to the next character (`i++`).
    - If the character is not uppercase, the function immediately returns 0, indicating a non-uppercase string.

**Key Points:**

- The function only considers characters 'A' to 'Z' as uppercase.
- Empty strings (`""`) are considered non-uppercase according to this function's definition.

**Example Usage:**

The provided commented code in the `main` function demonstrates how to use `ft_str_is_uppercase` with various test strings:

```c
char str1[] = "ABC";  // Output: 1 (uppercase)
char str2[] = "A1B2C"; // Output: 0 (contains non-uppercase characters)
char str3[] = "ABCas";  // Output: 0 (contains non-uppercase characters)
char str4[] = "";     // Output: 0 (empty string is considered non-uppercase)
```

**Compiling and Running the Code (assuming `ft_str_is_uppercase` is part of a custom library):**

1. Save the code in a file named `ft_str_is_uppercase_example.c`.
2. Compile the code using a command like:

```bash
cc -Wall -Wextra -Werror *.c
```

3. Run the program:

```bash
./a.out
```

This will print the results of `ft_str_is_uppercase` for the provided test strings.