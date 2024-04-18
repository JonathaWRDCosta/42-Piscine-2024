## Documentation for the code snippet

This code demonstrates a program that prints all command-line arguments provided when running the program, excluding the program name itself.

**Functionality:**

The code utilizes two functions:

1. **`ft_putstr`:**
   - This function takes a character pointer (`str`) as input, which points to a null-terminated string.
   - It iterates through the string until it encounters the null terminator (`\0`).
   - Inside the loop, it uses `write(1, &str[i], 1)` (assumed functionality of `unistd.h`) to write each character of the string to the standard output (typically the console).

2. **`main` function:**
   - It serves as the program's entry point and performs the following actions:
     - Checks for command-line arguments using `argc`.
     - Iterates through arguments using a loop (`i < argc`).
       - Skips the first argument (`argv[0]`) as it represents the program name.
       - Calls `ft_putstr` to print the current argument (`argv[i]`).
       - Increments the loop counter (`i++`) to move to the next argument.
     - After the loop, it adds a newline character (`\n`) using `write(1, "\n", 1)` for better output formatting.
     - Returns 0 to indicate successful program execution.

**Key Points:**

- This code demonstrates iterating through command-line arguments using `argc` and `argv`.
- It utilizes the `ft_putstr` function for efficient string printing.
- Understanding of null-terminated strings and loop structures is helpful.

**Compiling and Running the Code:**

1. Save the code in a file named `ft_strcmp.c`.
2. Compile the code using a command like:

```bash
cc -Wall -Wextra -Werror *.c
```

3. Run the program:

```bash
./a.out
```

The output will be each argument printed on a separate line:

```
argument1
argument2
argument3
```