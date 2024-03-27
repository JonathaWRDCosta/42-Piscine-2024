## Documentation for `ft_strcat`

This document explains the `ft_strcat` function, which concatenates (appends) one string to the end of another string.

**Functionality:**

The `ft_strcat` function takes two null-terminated character arrays (`dest` and `src`) as input. It appends the characters from the source string (`src`) to the end of the destination string (`dest`).

**Parameters:**

- `dest`: A pointer to the destination character array where the source string will be appended. **Important:** The destination array must have enough space to hold the combined string and the null terminator.
- `src`: A pointer to the source character array (string) to be appended.

**Return Value:**

- The function returns a pointer to the destination string (`dest`).

**Behavior:**

1. **Find destination string length:** The function first calls `ft_strlen` (assumed to be defined elsewhere) to determine the current length (`j`) of the destination string (`dest`). This is important to know where to start appending the source string.
2. **Append characters:** It uses a `while` loop that iterates through each character in the source string (`src`) until the null terminator (`\0`) is encountered. Inside the loop:
    - The current character from the source string (`src[i]`) is copied to the appropriate position in the destination string (`dest[j + i]`). The `j` offset ensures characters are appended after the existing content in `dest`.
    - The loop counter `i` is incremented to move to the next character in `src`.
3. **Add null terminator:** After the loop (when all characters from `src` are copied), the function adds a null terminator (`\0`) to the end of the combined string in `dest`. This is crucial to mark the end of the concatenated string.
4. **Return destination pointer:** Finally, the function returns a pointer to the modified destination string (`dest`).

**Key Points:**

- **Destination size:** The destination string (`dest`) must have enough space to hold the combined string and the null terminator. Otherwise, buffer overflow can occur. 
- **Appending:** The source string is appended to the end of the destination string.
- **Null terminator:** The function adds a null terminator to the end of the combined string in `dest`.

**Example Usage:**

The provided commented code in the `main` function demonstrates how to use `ft_strcat`:

```c
char str1[20] = "Hello,";  // Destination string with enough space (20 characters)
char str2[20] = " World!";

printf("%s\n", ft_strcat(str1, str2));  // Output: Hello ,World!
```

**Compiling and Running the Code (assuming `ft_strlen` and `ft_strcat` are part of a custom library):**

1. Save the code in a file named `ft_strcat.c`.
2. Compile the code using a command like:

```bash
cc -Wall -Wextra -Werror *.c
```

3. Run the program:

```bash
./a.out
```

This will print "Hello, World!", demonstrating successful string concatenation.