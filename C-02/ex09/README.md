## Documentation for `ft_strcapitalize`

This document explains the `ft_strcapitalize` function, which capitalizes the first letter of each word in a string.

**Functionality:**

The `ft_strcapitalize` function takes a character pointer (`str`) as input and modifies the string in-place, capitalizing the first letter of each word. It performs the following steps:

1. **Lowercases the entire string:** It calls the `ft_strlowcase` function (assumed to be defined elsewhere) to convert all uppercase letters to lowercase.
2. **Iterates through the string:** It uses a `while` loop to process each character in the string.
3. **Capitalizes first letter of words:**
    - If the current character is a lowercase letter (`a-z`):
        - If it's the first character of the string (index 0) or the character following a non-letter/non-digit (`j == 1`):
            - The character is converted to uppercase by subtracting 32 from its ASCII value.
        - The `j` flag is set to 0, indicating we're no longer at the beginning of a word.
4. **Handles numbers and non-letters:**
    - If the current character is a digit (`0-9`):
        - The `j` flag is set to 0, indicating we're not at the beginning of a word (numbers don't trigger capitalization).
    - Otherwise (punctuation, symbols):
        - The `j` flag is set to 1, indicating the next letter could be the start of a new word.

**Parameters:**

- `str`: A pointer to the null-terminated character array (string) to be capitalized.

**Return Value:**

- The function returns the modified string (`str`) itself.

**Behavior:**

The function modifies the original string (`str`) in-place. Ensure you have a copy of the original string if you need to preserve it.

**Key Points:**

- The function first converts the entire string to lowercase using `ft_strlowcase`.
- It considers the first character of the string and characters following non-letters/non-digits as potential starting points for words and capitalizes them.
- Digits and punctuation do not trigger word capitalization.

**Example Usage:**

The provided commented code in the `main` function demonstrates how to use `ft_strcapitalize` with a test string:

```c
char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un\0";

printf("%s", ft_strcapitalize(str));
// Output: Salut, Comment Tu Vas ? 42mots Quarante-Deux; Cinquante+Et+Un
```

**Compiling and Running the Code (assuming `ft_strlowcase` is part of a custom library):**

1. Save the code in a file named `ft_strcapitalize_example.c`.
2. Compile the code using a command like:

```bash
cc -Wall -Wextra -Werror *.c
```

3. Run the program:

```bash
./a.out
```

This will print the capitalized version of the test string.