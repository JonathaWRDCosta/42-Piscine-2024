## Documentation for `ft_strncmp`

This document explains the `ft_strncmp` function, which compares two strings lexicographically up to a certain number of characters.

**Functionality:**

The `ft_strncmp` function takes three arguments:

- `s1`: A pointer to the first null-terminated character array (string).
- `s2`: A pointer to the second null-terminated character array (string).
- `n`: An unsigned integer specifying the maximum number of characters to compare.

It compares the characters in `s1` and `s2` up to `n` characters or until a null terminator (`\0`) is encountered in either string. The function returns an integer value indicating the relationship between the strings based on the comparison within the specified limit.

**Parameters:**

- `s1`: The first string to compare.
- `s2`: The second string to compare.
- `n`: The maximum number of characters to compare (unsigned integer).

**Return Value:**

- The function returns an integer value based on the comparison:
    - 0 (zero): If the strings are identical up to `n` characters (or if `n` is 0).
    - Less than 0 (negative value): If the first differing character in `s1` is less than the corresponding character in `s2` (lexicographically smaller).
    - Greater than 0 (positive value): If the first differing character in `s1` is greater than the corresponding character in `s2` (lexicographically larger).

**Behavior:**

The function iterates through each character in both strings using a `while` loop that continues as long as three conditions are met:

- The current index `i` is less than `n` (to limit the comparison to the specified number of characters).
- The current character in `s1` is not the null terminator (`\0`).
- The current characters in `s1` and `s2` are equal (`s1[i] == s2[i]`).

- If the loop completes (reaching `n` characters or null terminators in both strings before `n`), it means the strings are identical up to `n` characters, and the function returns 0.
- If the loop breaks because a character difference is encountered (`s1[i] != s2[i]`), the function immediately returns the difference between the ASCII values of the mismatched characters, cast to unsigned char to avoid sign extension issues.

**Key Points:**

- This function performs a lexicographic comparison up to a specified limit (`n`).
- The return value indicates the alphabetical order of the strings based on the first difference encountered within `n` characters.
- If `n` is 0, the function effectively checks if the first characters of the strings are equal (and returns 0 if they are).

**Example Usage:**

The provided code in the `main` function demonstrates how to use `ft_strncmp`:

```c
char src1[] = "Hello :D";
char src2[] = "Hell :D";

printf("%d", ft_strncmp(src1, src2, 10));  // Output: 1 (strings differ at 'o' vs 'l' within 10 characters)
```

**Compiling and Running the Code (assuming `ft_strncmp` is part of a custom library):**

1. Save the code in a file named `ft_strncmp.c`.
2. Compile the code using a command like:

```bash
cc -Wall -Wextra -Werror *.c
```

3. Run the program:

```bash
./a.out
```

This will print 1, indicating that the strings differ at the 'o' vs 'l' characters within the first 10 characters. You can try modifying `n` or the strings to see how the return value changes based on the comparison limit and character differences.