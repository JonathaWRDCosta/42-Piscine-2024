## Documentation for `ft_strlowcase`

This document explains the `ft_strlowcase` function, which converts all uppercase letters in a string to lowercase.

**Functionality:**

The `ft_strlowcase` function takes a character pointer (`str`) as input and modifies the string in-place by converting all uppercase letters (A-Z) to their lowercase equivalents (a-z).

**Parameters:**

- `str`: A pointer to the null-terminated character array (string) to be converted.

**Return Value:**

- The function returns the modified string (`str`) itself. This allows for function chaining (e.g., `ft_strupcase(ft_strtolower(str))`).

**Behavior:**

The function iterates through each character in the string using a `while` loop that continues as long as the current character (`str[i]`) is not the null terminator (`\0`). Inside the loop:

- An `if` statement checks if the current character's ASCII value falls within the range of uppercase letters (65 to 90).
    - If the character is uppercase, it is converted to lowercase by adding 32 to its ASCII value (the difference between corresponding uppercase and lowercase letters). This modification happens directly in the original string (`str[i]`).
    - The loop continues to the next character (`i++`).

**Key Points:**

- The function modifies the original string (`str`) in-place. Ensure you have a copy of the original string if you need to preserve it.
- The function only converts uppercase letters (A-Z) to lowercase. Non-alphabetic characters and lowercase letters remain unchanged.

**Example Usage:**

The provided commented code in the `main` function demonstrates how to use `ft_strlowcase` with various test strings:

```c
char str1[] = "Hello 42";
char str2[] = "Oi 42";
char str3[] = "Hallo 42";
char str4[] = "&/()/$##";

printf("%s\n", ft_strlowcase(str1));  // Output: hello 42
printf("%s\n", ft_strlowcase(str2));  // Output: oi 42 (no change)
printf("%s\n", ft_strlowcase(str3));  // Output: hallo 42
printf("%s\n", ft_strlowcase(str4));  // Output: &/()/$## (no change for non-alphabetic characters)
```

**Compiling and Running the Code (assuming `ft_strlowcase` is part of a custom library):**

1. Save the code in a file named `ft_strlowcase_example.c`.
2. Compile the code using a command like:

```bash
cc -Wall -Wextra -Werror *.c
```

3. Run the program:

```bash
./a.out
```

This will print the lowercase versions of the provided test strings.