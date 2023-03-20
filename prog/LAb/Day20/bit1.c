#include<stdio.h>
struct xyz
{
    int a;
    char c;
    unsigned char reserved[3];
    double d;
}temp={10,'A',{ 0,0,0},20.14};
int main()
{
    char *ptr=(double *)&temp;
    printf("Size of the struct : %d",sizeof(temp));
    printf("\n value of d is %lf",*(double *)(ptr+8));
    return 0;
}
