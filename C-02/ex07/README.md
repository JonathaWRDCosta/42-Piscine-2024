## Documentation for `ft_strupcase`

This document explains the `ft_strupcase` function, which converts all lowercase letters in a string to uppercase.

**Functionality:**

The `ft_strupcase` function takes a character pointer (`str`) as input and modifies the string in-place by converting all lowercase letters (a-z) to their uppercase equivalents (A-Z).

**Parameters:**

- `str`: A pointer to the null-terminated character array (string) to be converted.

**Return Value:**

- The function returns the modified string (`str`) itself. This allows for function chaining (e.g., `ft_strupcase(ft_strtolower(str))`).

**Behavior:**

The function iterates through each character in the string using a `while` loop that continues as long as the current character (`str[i]`) is not the null terminator (`\0`). Inside the loop:

- An `if` statement checks if the current character's ASCII value falls within the range of lowercase letters (97 to 122).
    - If the character is lowercase, it is converted to uppercase by subtracting 32 from its ASCII value (the difference between corresponding lowercase and uppercase letters). This modification happens directly in the original string (`str[i]`).
    - The loop continues to the next character (`i++`).

**Key Points:**

- The function modifies the original string (`str`) in-place. Ensure you have a copy of the original string if you need to preserve it.
- The function only converts lowercase letters (a-z) to uppercase. Non-alphabetic characters and uppercase letters remain unchanged.

**Example Usage:**

The provided commented code in the `main` function demonstrates how to use `ft_strupcase` with various test strings:

```c
char str1[] = "Hello 42";
char str2[] = "Oi 42";
char str3[] = "Hallo 42";
char str4[] = "Hoi 42";

printf("%s\n", ft_strupcase(str1));  // Output: HELLO 42
printf("%s\n", ft_strupcase(str2));  // Output: OI 42 (no change)
printf("%s\n", ft_strupcase(str3));  // Output: HALLO 42
printf("%s\n", ft_strupcase(str4));  // Output: HOI 42
```

**Compiling and Running the Code (assuming `ft_strupcase` is part of a custom library):**

1. Save the code in a file named `ft_strupcase_example.c`.
2. Compile the code using a command like:

```bash
cc -Wall -Wextra -Werror *.c
```

3. Run the program:

```bash
./a.out
```

This will print the uppercase versions of the provided test strings.