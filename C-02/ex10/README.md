## Documentation for `ft_strlcpy`

This document explains the `ft_strlcpy` function, which copies a string to a destination buffer with size limitations.

**Functionality:**

The `ft_strlcpy` function copies a source string (`src`) to a destination character array (`dest`) while considering the destination's size (`size`). It aims to be a safer alternative to `strncpy` by preventing buffer overflows.

**Parameters:**

- `dest`: A pointer to the destination character array where the string will be copied.
- `src`: A pointer to the null-terminated source string to be copied.
- `size`: An unsigned integer representing the size of the destination character array (`dest`).

**Return Value:**

- The function returns an unsigned integer (`unsigned int`) representing the length of the source string (`src`).

**Behavior:**

1. **Loops with size check:** The function iterates using a `while` loop that continues as long as two conditions are met:
    - The current index `i` is less than `size - 1` (to leave space for the null terminator).
    - The current character in the source string (`src[i]`) is not the null terminator (`\0`).
2. **Copies characters:** Within the loop, the character from the source string (`src[i]`) is copied to the destination array (`dest[i]`).
3. **Adds null terminator:** After the loop, the null terminator (`\0`) is explicitly added to the destination array at index `i`.
4. **Returns source string length:** The function returns the length of the source string (`src`), regardless of whether it was fully copied or truncated.

**Key Points:**

- `ft_strlcpy` aims to prevent buffer overflows by ensuring the null terminator fits within the destination size.
- It returns the length of the source string, allowing you to check if truncation occurred (if the return value equals `size - 1`). 
- Consider using this function instead of `strncpy` when safety and potential truncation information are important.

**Example Usage:**

The provided commented code in the `main` function demonstrates how to use `ft_strlcpy`:

```c
char *src = "World!";  // Source string
char dest[ft_strlen(src)];  // Destination array with size based on source string length (including null terminator)

unsigned int strlcpy_result = ft_strlcpy(dest, src, sizeof(dest));  // Assuming sizeof(dest) equals ft_strlen(src)

printf("%u\n", strlcpy_result);  // Output: 6 (length of "World!")
printf("%s\n", dest);            // Output: "World!" (string copied successfully)
```

**Compiling and Running the Code:**

1. Save the code in a file named `ft_strlcpy.c`.
2. Compile the code using a command like:

```bash
cc -Wall -Wextra -Werror *.c
```

3. Run the program:

```bash
./a.out
```

**Documentation for `ft_strlen`**

This function is a simple implementation to get the length of a null-terminated string. It iterates through the characters until it encounters the null terminator (`\0`) and returns the index (length). The documentation for `ft_strlen` can be found in previous sections where it's used. 