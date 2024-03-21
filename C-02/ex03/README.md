## Documentation for `ft_str_is_numeric`

This document explains the `ft_str_is_numeric` function, which checks if a string consists only of numeric characters (0-9).

**Functionality:**

The `ft_str_is_numeric` function takes a character pointer (`str`) as input and determines if all characters in the string are numerical digits.

**Parameters:**

- `str`: A pointer to the null-terminated character array (string) to be evaluated.

**Return Value:**

- The function returns:
    - 1 (integer value one) if the string contains only numeric characters (0-9).
    - 0 (integer value zero) if the string contains any non-numeric characters.

**Behavior:**

The function iterates through each character in the string using a `while` loop that continues as long as the current character (`str[i]`) is not the null terminator (`\0`). Inside the loop:

- An `if` statement checks if the current character's ASCII value falls within the range of numerical digits (48 to 57).
    - If the character is a digit, the loop continues to the next character (`i++`).
    - If the character is not a digit, the function immediately returns 0, indicating a non-numeric string.

**Key Points:**

- The function only considers characters '0' to '9' as numeric.
- Empty strings (`""`) are considered non-numeric according to this function's definition.

**Example Usage:**

The provided commented code in the `main` function demonstrates how to use `ft_str_is_numeric` with various test strings:

```c
char str1[] = "123";  // Output: 1 (numeric)
char str2[] = "Abc";  // Output: 0 (contains non-numeric characters)
char str3[] = "123Abc"; // Output: 0 (contains non-numeric characters)
char str4[] = "";     // Output: 0 (empty string is considered non-numeric)
```

**Compiling and Running the Code (assuming `ft_str_is_numeric` is part of a custom library):**

1. Save the code in a file named `ft_str_is_numeric_example.c`.
2. Compile the code using a command like:

```bash
cc -Wall -Wextra -Werror *.c
```

3. Run the program:

```bash
./a.out
```

This will print the results of `ft_str_is_numeric` for the provided test strings.
