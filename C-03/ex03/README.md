## Documentation for `ft_strncat`

This document explains the `ft_strncat` function, which is similar to `ft_strcat` but with a limitation on the number of characters appended.

**Functionality:**

The `ft_strncat` function takes three arguments:

- `dest`: A pointer to the destination character array where the source string will be appended. **Important:** The destination array must have enough space to hold the combined string and the null terminator.
- `src`: A pointer to the source character array (string) to be appended.
- `nb`: An unsigned integer specifying the maximum number of characters to append from the source string.

It appends a limited number of characters from the source string (`src`) to the end of the destination string (`dest`), considering the provided `nb` value.

**Parameters:**

- `dest`: The destination string.
- `src`: The source string to append.
- `nb`: The maximum number of characters to append (unsigned integer).

**Return Value:**

- The function returns a pointer to the modified destination string (`dest`).

**Behavior:**

1. **Find destination string length:** The function calls `ft_strlen` (assumed to be defined elsewhere) to determine the current length (`j`) of the destination string (`dest`). This helps identify the starting position for appending characters.
2. **Limited append:** It uses a `while` loop that iterates through characters in the source string (`src`) with two conditions:
    - The current index `i` is less than `nb` (to limit the number of characters appended based on the provided value).
    - The current character in `src` is not the null terminator (`\0`).
  Inside the loop:
    - The current character from `src` is copied to the destination string at `dest[j + i]`.
    - The loop counter `i` is incremented to move to the next character in `src`.
3. **Add null terminator:** After the loop (when the limit `nb` is reached or a null terminator in `src` is encountered), the function adds a null terminator (`\0`) to the end of the combined string in `dest`.
4. **Return destination pointer:** Finally, the function returns a pointer to the modified destination string (`dest`).

**Key Points:**

- **Destination size:** Ensure the destination string (`dest`) has enough space to hold the combined string (limited by `nb` characters) and the null terminator.
- **Limited appending:** The function appends a maximum of `nb` characters from the source string.
- **Null terminator:** The function adds a null terminator to mark the end of the combined string in `dest`.

**Comparison with `ft_strcat`:**

- `ft_strcat` appends the entire source string to the destination string, while `ft_strncat` limits the number of characters appended based on the `nb` parameter.

**Example Usage:**

The provided code in the `main` function demonstrates how to use `ft_strncat` and compares it with the standard library `strncat`:

```c
char dest1[20] = "Hello, ";
char dest2[20] = "Hello, ";
char src[20] = "there :D";

printf("%s\n", strncat(dest1, src, 8)); // Standard library strncat
printf("%s\n", ft_strncat(dest2, src, 8)); // Custom ft_strncat

// Expected output:
// Hello, there :D
// Hello, there :
```

In this example, both functions append "there :" to the destination strings, but `strncat` continues until it reaches the null terminator in `src`, potentially overflowing the destination buffer if not sized correctly. `ft_strncat` respects the `nb` limit (8 characters) and stops appending after the colon, leaving enough space for the null terminator.

**Compiling and Running the Code (assuming `ft_strlen` and `ft_strncat` are part of a custom library):**

1. Save the code in a file named `ft_strncat_example.c`.
2. Compile the code using a command like:

```bash
cc -Wall -Wextra -Werror *.c
```

3. Run the program:

```bash
./a.out
```

This will print the output mentioned above, demonstrating the behavior of both `strncat` and `ft_strncat`.