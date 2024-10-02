//3.Create a function that swaps two variables using pointers to pointers.

#include<stdio.h>
void swap(int **x, int **y)
{
    int *temp=*x;
    *x=*y;
    *y=temp;

    printf("a=%d b=%d",**x,**y);
}
int main()
{
    int a=10,b=20;
    int *p1=&a;
    int *p2=&b;
    
    swap(&p1,&p2);

    printf("a=%d b=%d",*p1,*p2);
}