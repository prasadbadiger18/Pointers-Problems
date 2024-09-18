
// 2.Create a program to manipulate an array using pointer arithmetic.

#include <stdio.h>
int main()
{
    // Task 1 : Access and Modify Elements:
    //          a.Access the third element of an integer array using pointer arithmetic and modify its value.

    // #CODE
    //  int A[]={1,2,3,4,5,6,7,8,9,0};
    //  int *ptr=(A+2);
    //  *ptr=10;
    //  printf("%d",A[2]);

    // Task 2: Increment and Decrement:
    //         a.Increment a pointer to move through an integer array and change each element to double its original value.
    //         b.Decrement the pointer after reaching the last element and set each element to zero as you move backward.

    //#CODE
    // int A[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    // int *ptr = A;
    // int size = sizeof(A) / sizeof(int);
    // for (int i = 0; i < size; i++)
    // {
    //     *ptr = (*ptr * 2);
    //     ptr++;
    // }

    // ptr = A;

    // // Print the modified array
    // printf("Modified array: ");
    // for (int i = 0; i < size; i++)
    // {
    //     printf("%d ", *(ptr + i)); // Print each element
    // }
}