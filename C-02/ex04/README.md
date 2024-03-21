## Documentation for `ft_str_is_lowercase`

This document explains the `ft_str_is_lowercase` function, which checks if a string consists only of lowercase characters (a-z).

**Functionality:**

The `ft_str_is_lowercase` function takes a character pointer (`str`) as input and determines if all characters in the string are lowercase letters.

**Parameters:**

- `str`: A pointer to the null-terminated character array (string) to be evaluated.

**Return Value:**

- The function returns:
    - 1 (integer value one) if the string contains only lowercase characters (a-z).
    - 0 (integer value zero) if the string contains any non-lowercase characters.

**Behavior:**

The function iterates through each character in the string using a `while` loop that continues as long as the current character (`str[i]`) is not the null terminator (`\0`). Inside the loop:

- An `if` statement checks if the current character's ASCII value falls within the range of lowercase letters (97 to 122).
    - If the character is lowercase, the loop continues to the next character (`i++`).
    - If the character is not lowercase, the function immediately returns 0, indicating a non-lowercase string.

**Key Points:**

- The function only considers characters 'a' to 'z' as lowercase.
- Empty strings (`""`) are considered non-lowercase according to this function's definition.

**Example Usage:**

The provided commented code in the `main` function demonstrates how to use `ft_str_is_lowercase` with various test strings:

```c
char str1[] = "abc";  // Output: 1 (lowercase)
char str2[] = "a2b2c"; // Output: 0 (contains non-lowercase characters)
char str3[] = "abAc";  // Output: 0 (contains non-lowercase characters)
char str4[] = "";     // Output: 0 (empty string is considered non-lowercase)
```

**Compiling and Running the Code (assuming `ft_str_is_lowercase` is part of a custom library):**

1. Save the code in a file named `ft_str_is_lowercase_example.c`.
2. Compile the code using a command like:

```bash
cc -Wall -Wextra -Werror *.c
```

3. Run the program:

```bash
./a.out
```

This will print the results of `ft_str_is_lowercase` for the provided test strings.