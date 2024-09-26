#include<stdio.h>
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9};
    int size=sizeof(arr)/sizeof(arr[0]);
    int *start=arr;
    int *end=start+size-1;

    while(start<end)
    {
        int temp=*start;
        *start=*end;
        *end=temp;

        start++;
        end--;
    }
    for(int i=0;i<size;i++)
    {
        printf(" %d",arr[i]);
    }
}