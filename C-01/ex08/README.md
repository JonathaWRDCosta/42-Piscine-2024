## Documentation for `ft_sort_int_tab`

This document explains the code for the function `ft_sort_int_tab` and how to run it on your local machine.

**Functionality:**

The `ft_sort_int_tab` function takes an integer array (`tab`) and its size (`size`) as input. It sorts the elements of the array in ascending order. This means the elements will be arranged from smallest to largest.

**Sorting Algorithm:**

The function implements a sorting algorithm called **Selection Sort**. Here's a basic overview of how it works:

1. It iterates through the array in two loops.
2. In the outer loop, it considers each element as the minimum element (initially).
3. The inner loop iterates through the remaining elements of the array.
4. If a larger element is found in the inner loop, it swaps the current minimum element with the larger element.
5. After the inner loop completes, the element at the current index is guaranteed to be the minimum element seen so far, and it's placed in the correct position.
6. The outer loop repeats these steps, gradually filling the sorted part of the array from the beginning.

**Compiling and Running the Code:**

1. **Save the code:** Create a file named `ft_sort_int_tab.c` and paste the following code snippet:

```c
#include <stdio.h>

void ft_sort_int_tab(int *tab, int size)
{
  int step, i;

  step = 0;
  while (step < size - 1)
  {
    i = 0;
    while (i < size - step - 1)
    {
      if (tab[i] > tab[i + 1])
      {
        int temp = tab[i];
        tab[i] = tab[i + 1];
        tab[i + 1] = temp;
      }
      i++;
    }
    step++;
  }
}



/*
int main(void)
{
    int tab[] = {6, 5, 4, 3, 2, 1};
    int size = sizeof(tab) / sizeof(tab[0]);

    ft_sort_int_tab(tab, size);

    for (int i = 0; i < size; i++)
    {
        printf("%d ", tab[i]);
    }
    printf("\n");

    return 0;
}
*/
```
2. **Compile the code:** Open a terminal and navigate to the directory where you saved `ft_sort_int_tab.c`. Compile the code using the following command, replacing `FILENAME` with the actual filename if it's different:

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
1 2 3 4 5 6
```

This shows that the elements of the array `tab` have been sorted in ascending order.

**Explanation (commented code):**

The provided code includes a `main` function that demonstrates how to use the `ft_sort_int_tab` function. Here's a breakdown:

- Declares an integer array `tab` and initializes it with the values {6, 5, 4, 3, 2, 1}.
- Declares an integer variable `size` and initializes it with the length of the array using a common trick to get the size of an array in C.
- Calls the `ft_sort_int_tab` function, passing the address of `tab` and the size of the array.
- The `ft_sort_int_tab` function uses a nested loop structure to implement selection sort.
  - The outer loop (`step`) controls the number of passes needed to sort the array.
  - The inner loop (`i`) iterates through the unsorted part of the array (all elements except the last `step` elements).
  - Inside the inner loop, if a larger element is found (`tab[i] > tab[i + 1]`), a temporary variable `temp` is used to swap the elements using assignment.
  - After each pass of the outer loop, the largest element is guaranteed to be in its correct sorted position at the end of the array
I'd be glad to continue the explanation:

**After each pass of the outer loop in selection sort, the largest element encountered so far is guaranteed to be in its correct sorted position at the end of the array.** Here's a breakdown of why this happens:

1. **Outer Loop (`step`):**
   - This loop iterates from `step = 0` up to `step = size - 2`.
   - With each iteration, `step` represents the number of elements that are considered already sorted and placed in their final positions at the end of the array.

2. **Inner Loop (`i`):**
   - This loop iterates through the unsorted part of the array, which starts from index 0 and gradually reduces in size as the outer loop progresses.
   - It compares adjacent elements (`tab[i]` and `tab[i + 1]`).

3. **Swapping (if necessary):**
   - If `tab[i]` is found to be greater than `tab[i + 1]`, it means an element out of order is encountered.
   - In this case, a swap occurs using a temporary variable (`temp`). The larger element (`tab[i]`) is swapped with the smaller element (`tab[i + 1]`).

**How Each Pass Ensures Largest Element Placement:**

- During the first iteration (`step = 0`), the inner loop iterates through all elements except the last one (because `size - step - 1` becomes `size - 1`).
- If any larger elements are encountered within the unsorted part, they get swapped with the current element at index `i`. This ensures that by the end of the first pass, the largest element encountered so far is placed in the last position (index `size - 1`).
- In subsequent iterations (`step > 0`), the inner loop iterates through a progressively smaller unsorted part (excluding the already sorted elements at the end).
- The same comparison and swapping logic applies. Any remaining larger elements get swapped towards the end of the unsorted portion, gradually pushing the largest element encountered so far to its correct final position.

**Example:**

Consider the array `{6, 5, 4, 3, 2, 1}`:

* **Pass 1 (`step = 0`):**
   - The inner loop iterates through elements at indices 0, 1, 2, 3, and 4.
   - Swaps might occur, potentially placing the largest element encountered (e.g., 6) at index 5.

* **Pass 2 (`step = 1`):**
   - The inner loop iterates through elements at indices 0, 1, 2, and 3 (excluding the last sorted element, which might be 6).
   - Swaps might occur, ensuring the second largest element is placed at index 4.

* **Pass 3 (`step = 2`):**
   - The inner loop iterates through elements at indices 0, 1, and 2 (excluding the last two sorted elements).
   - Swaps might occur, finalizing the sorting process.

After all passes, the array becomes `{1, 2, 3, 4, 5, 6}`, with the largest element (`6`) guaranteed to be at the end.

**Key Points:**

You're absolutely right, there is some redundancy in the key points you listed. Here's a revised version that combines the essential points without repetition:

**Key Points:**

- **Selection sort** iteratively finds the minimum element in the unsorted part of the array and swaps it with the first element in that unsorted part.
- With each outer loop iteration, one more element is guaranteed to be in its correct, sorted position at the end of the array.
- The outer loop controls the number of passes needed to sort the entire array.
- The inner loop iterates through the shrinking unsorted portion to find the minimum element.
- The sorting process finishes when all elements have been compared and placed in their correct positions.

**Selection sort has a time complexity of O(n^2)**, meaning the sorting time grows quadratically with the array size. While it's relatively simple to understand and implement, other sorting algorithms like merge sort or quicksort can be more efficient for larger datasets.