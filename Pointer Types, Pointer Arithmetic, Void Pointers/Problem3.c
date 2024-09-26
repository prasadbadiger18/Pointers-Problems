// 3.Write a program to calculate the difference between two pointers.

#include<stdio.h>
int main()
{
    int arr[]={1,2,3,4,5,6,7,8};
    int size=sizeof(arr)/sizeof(arr[0]);
    int *start=arr;          //each pointer take 8 byte of memory space in 64 bit s/m and 4 byte in 32 bit
    int *end=arr+size-1;

    int diff=start-end;
    
    printf("%d",(diff));
}