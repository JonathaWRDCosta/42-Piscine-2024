## Documentation for `ft_strcmp`

This document explains the `ft_strcmp` function, which compares two strings lexicographically.

**Functionality:**

The `ft_strcmp` function takes two null-terminated character arrays (`s1` and `s2`) as input and compares them character by character. It returns an integer value indicating the relationship between the strings.

**Parameters:**

- `s1`: A pointer to the first null-terminated character array (string).
- `s2`: A pointer to the second null-terminated character array (string).

**Return Value:**

- The function returns an integer value based on the comparison:
    - 0 (zero): If the strings are identical (all corresponding characters are the same).
    - Less than 0 (negative value): If the first differing character in `s1` is less than the corresponding character in `s2` (lexicographically smaller).
    - Greater than 0 (positive value): If the first differing character in `s1` is greater than the corresponding character in `s2` (lexicographically larger).

**Behavior:**

The function iterates through each character in both strings using a `while` loop that continues as long as two conditions are met:

- The current character in `s1` is not the null terminator (`\0`).
- The current characters in `s1` and `s2` are equal (`s1[i] == s2[i]`).

- If the loop completes (reaching the null terminator in both strings), it means the strings are identical, and the function returns 0.
- If the loop breaks because the characters differ (`s1[i] != s2[i]`), the function immediately returns the difference between the ASCII values of the mismatched characters (`s1[i] - s2[i]`).

**Key Points:**

- This function performs a lexicographic comparison, meaning it compares the strings character by character based on their ASCII values.
- The return value indicates the alphabetical order of the strings based on the first difference encountered.

**Example Usage:**

The provided code in the `main` function demonstrates how to use `ft_strcmp`:

```c
char src1[] = "Hello there";
char src2[] = "Hello there";

printf("%d", ft_strcmp(src1, src2));  // Output: 0 (strings are identical)
```

**Compiling and Running the Code (assuming `ft_strcmp` is part of a custom library):**

1. Save the code in a file named `ft_strcmp.c`.
2. Compile the code using a command like:

```bash
cc -Wall -Wextra -Werror *.c
```

3. Run the program:

```bash
./a.out
```

This will print 0, indicating that the two strings are identical. You can try modifying the strings (e.g., changing "there" to "theer") to see how the return value changes based on the first character difference.