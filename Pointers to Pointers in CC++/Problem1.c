#include <stdio.h>
#include <stdlib.h>

int main() {
    int rows = 3, cols = 4;
    
    // Step 1: Dynamically allocate memory for a 2D array
    int** array = (int**)malloc(rows * sizeof(int*));  // Array of row pointers
    for (int i = 0; i < rows; i++) {
        array[i] = (int*)malloc(cols * sizeof(int));   // Allocate memory for columns in each row
    }

    // Step 2: Initialize and manipulate the 2D array
    printf("Filling the 2D array with values...\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            array[i][j] = i * cols + j;  // Assign some values to the array
        }
    }

    // Step 3: Print the 2D array
    printf("2D array values:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }

    // Step 4: Free the allocated memory
    for (int i = 0; i < rows; i++) {
        free(array[i]);  // Free each row's memory
    }
    free(array);  // Free the array of row pointers

    return 0;
}


/*Step 1: Understanding the Basics
In C, a pointer holds the address of a variable in memory.

Single Pointer (int*): Points to an int (a single value or the first element of a 1D array).
Pointer to Pointer (int**): Points to an int* (a pointer), which in turn points to an int or the first element of an array.
Example: Dynamic Memory Allocation for a 2D Array
Let's assume we want to allocate a 2D array with 3 rows and 4 columns (3 x 4 matrix) dynamically.

Visualization:
Think of it like a table:

less
Copy code
Row 1:  [ ]  [ ]  [ ]  [ ]
Row 2:  [ ]  [ ]  [ ]  [ ]
Row 3:  [ ]  [ ]  [ ]  [ ]
The goal is to dynamically allocate memory for this table and access each element using pointer arithmetic.

Step-by-Step Explanation:
1. Allocate Memory for Row Pointers:

code
int** array = (int**)malloc(3 * sizeof(int*));
What happens?

You are allocating memory for 3 pointers (int*), where each pointer represents a row.
In memory, after this step, you have an array of 3 pointers (one for each row). This does not yet allocate memory for the actual data (columns). It only allocates memory for the row pointers.
Visual Representation in Memory:

code
array ->  [ ptr_to_row_1 ]  [ ptr_to_row_2 ]  [ ptr_to_row_3 ]
At this point, each of these pointers is uninitialized (i.e., they don't point to any memory for storing the actual data). You will allocate that in the next step.

2. Allocate Memory for Each Row (Columns):

code
for (int i = 0; i < 3; i++) {
    array[i] = (int*)malloc(4 * sizeof(int));
}
What happens?

This loop iterates over each of the 3 pointers (representing the rows) and allocates memory for 4 integers in each row.
In each iteration, array[i] is a pointer to a row, and you allocate memory for 4 integers (the columns) in that row.
Visual Representation in Memory:

code
array ->  [ ptr_to_row_1 ]  [ ptr_to_row_2 ]  [ ptr_to_row_3 ]
            ↓                   ↓                   ↓
          [int] [int] [int] [int]     [int] [int] [int] [int]     [int] [int] [int] [int]
Now each pointer in the array points to a dynamically allocated array of 4 integers.
Memory Layout After Full Allocation
After these two steps, your memory looks like this:

array is a pointer to a block of 3 pointers, each of which points to a dynamically allocated array of integers.

code
array[0] -> [ int ] [ int ] [ int ] [ int ]   // Row 1 (4 columns)
array[1] -> [ int ] [ int ] [ int ] [ int ]   // Row 2 (4 columns)
array[2] -> [ int ] [ int ] [ int ] [ int ]   // Row 3 (4 columns)
Each array[i] represents a row and points to the start of a dynamically allocated array of integers (the columns).

Step 3: Accessing and Manipulating the Elements
You can now access and manipulate individual elements in this 2D array using array notation array[i][j] or pointer arithmetic.

For example:

code
array[0][0] = 1;  // First element in the first row
array[2][3] = 10; // Fourth element in the third row
Step 4: Freeing the Allocated Memory
Once you are done using the dynamically allocated 2D array, you must free the memory in reverse order:

Free each row (columns):

code
for (int i = 0; i < 3; i++) {
    free(array[i]);  // Free the memory for each row
}
Free the array of pointers (rows):

code
free(array);  // Free the memory for the array of pointers
Why Use Pointer to Pointer?
Flexibility: You can dynamically allocate memory based on runtime input. For example, if the number of rows and columns is not known in advance, using a pointer to a pointer allows dynamic allocation.
Memory Efficiency: You only allocate the exact amount of memory needed.
Row-by-Row Allocation: Each row can be allocated separately, meaning the number of columns in each row can be different (jagged arrays).
Recap of the Steps:
Allocate memory for row pointers: int** array = (int**)malloc(rows * sizeof(int*));
Allocate memory for each row: array[i] = (int*)malloc(cols * sizeof(int));
Access elements: array[i][j] to access and manipulate data.
Free memory: First, free each row (array[i]), then free the array of row pointers (array).
This explains how a 2D array is created using a pointer to a pointer and how memory is allocated in the background.
*/