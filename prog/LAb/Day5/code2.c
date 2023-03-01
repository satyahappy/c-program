#include<stdio.h>
int main()
{
    int a = 2;
    int b = 3;
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swapped numbers are %d %d",a,b);
}