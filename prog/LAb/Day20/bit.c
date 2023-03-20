#include<stdio.h>
struct xyz
{
    int a;
    char c;
    double d;
}temp={10,'A',20.14};
int main()
{
    char *ptr=(double *)&temp;
    printf("\n value of d is %c",*(char *)(ptr+4));
    return 0;
}

