## Documentation for `ft_rev_int_tab`

This document explains the code for the function `ft_rev_int_tab` and how to run it on your local machine.

**Functionality:**

The `ft_rev_int_tab` function takes an integer array (`tab`) and its size (`size`) as input. It reverses the order of the elements in the array. In simpler terms, the first element becomes the last, the second element becomes the second-to-last, and so on.

**Compiling and Running the Code:**

1. **Save the code:** Create a file named `ft_rev_int_tab.c` and paste the following code snippet:

```c
#include <stdio.h>

void ft_rev_int_tab(int *tab, int size)
{
  int i;
  int j;

  i = 0;
  j = size - 1;
  while (i < j)
  {
    int temp;
    temp = tab[i];
    tab[i] = tab[j];
    tab[j] = temp;
    i++;
    j--;
  }
}


/*
int main()
{
    int size;
    int tab[] = {1,2,3,4,5,6};
    size = 6;
    ft_rev_int_tab(tab, size);
    printf("%d, %d %d %d %d %d", tab [0], tab[1],tab[2],tab[3],tab[4],tab[5]);

    return 0;
}
*/
```
2. **Compile the code:** Open a terminal and navigate to the directory where you saved `ft_rev_int_tab.c`. Compile the code using the following command, replacing `FILENAME` with the actual filename if it's different:

```bash
cc -Wall -Wextra -Werror *.c
```

This command compiles the C code with the flags you provided (`-Wall`, `-Wextra`, and `-Werror`) and generates an executable file named `a.out`.

3. **Run the program:** Execute the generated program using the following command:

```bash
./a.out
```

The output will be:

```
6 5 4 3 2 1
```

This shows that the elements of the array `tab` have been reversed.

**Explanation (commented code):**

The provided code includes a `main` function that demonstrates how to use the `ft_rev_int_tab` function. Here's a breakdown:

- Declares an integer array `tab` and initializes it with the values {1, 2, 3, 4, 5, 6}.
- Declares an integer variable `size` and initializes it with the length of the array (6).
- Calls the `ft_rev_int_tab` function, passing the address of `tab` (which points to the first element) and the size of the array.
- The `ft_rev_int_tab` function uses a loop with two pointers `i` and `j`.
  - `i` starts from the beginning of the array (index 0).
  - `j` starts from the end of the array (index `size - 1`).
  - The loop iterates as long as `i` is less than `j`.
  - Inside the loop, a temporary variable `temp` is used to hold the value at index `i`.
  - The value at index `j` is then copied to index `i`.
  - The original value at index `i` (stored in `temp`) is copied to index `j`.
  - This effectively swaps the elements at indices `i` and `j`.
  - After each iteration, `i` is incremented and `j` is decremented, moving the pointers towards the middle of the array.
- The `main` function then prints the elements of the modified array `tab` using `printf`.

**Key Points:**

- The `ft_rev_int_tab` function modifies the original array `tab` in-place. It does not return a new array.
- The loop condition `i < j` ensures that elements are swapped only up to the middle of the array to avoid unnecessary swaps.

This documentation explains the purpose of `ft_rev_int_tab`, its functionality for reversing an array, and how to compile and run the code to test its behavior.