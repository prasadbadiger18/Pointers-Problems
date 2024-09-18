//1.Write a program to demonstrate different pointer types (int, float, double, char).

#include<stdio.h>
int main()
{
    int a=10;
    float b=1.23;
    double c=0.736478;
    char d='c';

    int *intPtr;
    intPtr=&a;
    printf("Value stored at a : %d\n",*intPtr);
    printf("Address of a : %d\n",intPtr);

    float *floatPtr;
    floatPtr=&b;
    printf("Value stored at b : %f\n",*floatPtr);
    printf("Address of b : %d\n",floatPtr);

    double *doublePtr;
    doublePtr=&c;
    printf("Value stored at c : %f\n",*doublePtr);
    printf("Address of c : %d\n",doublePtr);

    char *charPtr;
    charPtr=&d;
    printf("character stored at d : %c\n",*charPtr);
    printf("Address of d : %d\n",charPtr);
}
