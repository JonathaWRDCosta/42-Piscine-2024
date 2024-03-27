## Documentation for `ft_strstr`

This document explains the `ft_strstr` function, which searches for the first occurrence of a substring within a string.

**Functionality:**

The `ft_strstr` function takes two null-terminated character arrays (`str` and `to_find`) as input. It searches for the first occurrence of the substring (`to_find`) within the main string (`str`). If found, it returns a pointer to the beginning of the substring within the main string. Otherwise, it returns a null pointer (`NULL`).

**Parameters:**

- `str`: A pointer to the main string where the search will be performed.
- `to_find`: A pointer to the substring to be searched for within the main string.

**Return Value:**

- The function returns a pointer to the beginning of the first occurrence of the substring within the main string (`str`), or `NULL` if the substring is not found.

**Behavior:**

The function uses nested loops to perform the search:

1. **Empty Substring:** It first checks if the `to_find` string is empty (`to_find[0] == '\0'`). If it is, the entire main string (`str`) is considered a match, and the function returns a pointer to the beginning of `str`.
2. **Iterate through main string:** The function iterates through each character in the main string (`str`) using a `while` loop until a null terminator (`\0`) is encountered.
3. **Potential match:** Inside the loop, if the current character in `str` matches the first character of `to_find`:
    - A nested `while` loop starts, comparing characters in `to_find` with subsequent characters in `str`, starting from the next position after the match in `str`.
    - The nested loop continues as long as two conditions are met:
        - The current character in `to_find` is not the null terminator.
        - The corresponding characters in `str` and `to_find` match.
    - If the nested loop completes without encountering a mismatch (meaning all characters in `to_find` are found consecutively within `str`), it signifies a successful match.
4. **Match found:** If the nested loop completes (all characters in `to_find` match), the function returns a pointer to the beginning of the matched substring within the main string (`&str[i]`). This points to the character in `str` where the first character of the substring was found.
5. **No match:** If the outer loop completes without finding a match (no character in `str` triggers the nested loop for a successful comparison), the function returns `NULL`, indicating the substring was not found.

**Key Points:**

- This function searches for the first occurrence of the substring within the main string.
- It returns a pointer to the beginning of the substring if found, or `NULL` otherwise.
- The function handles empty substrings (considered a match for the entire main string).

**Example Usage:**

The provided code in the `main` function demonstrates how to use `ft_strstr` with various test cases:

```c
char str[] = "Hello, world!";
// ... (test cases defined)

char *result;

// ... (test case loops)

if (result) {
    printf("'%s' found in '%s': %s\n", to_findX, str, result);
} else {
    printf("'%s' not found in '%s'\n", to_findX, str);
}
```

This code tests for different substrings within the main string "Hello, world!" and prints messages indicating success or failure.

**Compiling and Running the Code (assuming `ft_strstr` is part of a custom library):**

1. Save the code in a file named `ft_strstr.c`.
2. Compile the code using a command like:

```bash
cc -Wall -Wextra -Werror *.c
```

3. Run the program:

```bash
./a.out
```

This will output the results of the test cases, demonstrating how `ft_strstr` finds or doesn't find substrings within the main string.