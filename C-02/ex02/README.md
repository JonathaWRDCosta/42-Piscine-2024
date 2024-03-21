## Documentation for `ft_str_is_alpha`

This document explains the `ft_str_is_alpha` function, which determines if a string consists only of alphabetic characters (a-z, A-Z).

**Functionality:**

The `ft_str_is_alpha` function takes a character pointer (`str`) as input and evaluates if all characters in the string are alphabetic.

**Parameters:**

- `str`: A pointer to the null-terminated character array (string) to be evaluated.

**Return Value:**

- The function returns:
    - 1 (integer value one) if the string contains only alphabetic characters.
    - 0 (integer value zero) if the string contains any non-alphabetic characters.

**Behavior:**

The function iterates through each character in the string using a `while` loop that continues as long as the current character (`str[i]`) is not the null terminator (`\0`). Inside the loop:

- An `if` statement checks if the current character falls within the ASCII value range of uppercase letters (65 to 90) or lowercase letters (97 to 122).
    - If the character is alphabetic, the loop continues to the next character (`i++`).
    - If the character is not alphabetic, the function immediately returns 0, indicating a non-alphabetic string.

**Key Points:**

- The function only considers letters (a-z, A-Z) as alphabetic characters.
- Empty strings (`""`) are considered alphabetic according to this function's definition.

**Example Usage:**

The provided commented code in the `main` function demonstrates how to use `ft_str_is_alpha` with various test strings:

```c
char str1[] = "Hello";  // Output: 1 (alphabetic)
char str2[] = "ABC123";  // Output: 0 (contains non-alphabetic characters)
char str3[] = "123";     // Output: 0 (contains non-alphabetic characters)
char str4[] = "";        // Output: 1 (empty string is considered alphabetic)
```

**Compiling and Running the Code (assuming `ft_str_is_alpha` is part of a custom library):**

1. Save the code in a file named `ft_str_is_alpha_example.c`.
2. Compile the code using a command like:

```bash
cc -Wall -Wextra -Werror *.c
```

3. Run the program:

```bash
./a.out
```

This will print the results of `ft_str_is_alpha` for the provided test strings.