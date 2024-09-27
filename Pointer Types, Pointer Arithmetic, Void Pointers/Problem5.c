//5.Write a function to find the size of a dynamically allocated array using pointer arithmetic.

#include<stdio.h>
#include<stdlib.h>
int FindSize(int *start,int *end)
{
    return end-start;
}
int main()
{
    int n=5;
    int *arr=(int*)malloc(n*sizeof(int));

    if(arr==NULL)
    {
        printf("Memory Allocation failed");
    }

    int size=FindSize(arr,arr+n);
    printf("%d",size);
}