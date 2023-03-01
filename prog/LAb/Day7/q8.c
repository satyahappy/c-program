#include<stdio.h>
int main()
{
    int a,b;
    printf("enter value of first:\n");
    scanf("%d",&a);
    printf("enter sceond:\n");
    scanf("%d",&b);
    if(a>b & b<a)
    {
        printf("a is greater");
    }
    else
    {
        printf("b is greater");
    }
    if (a>=b)
    {
        printf("\na is greater and equal to b\n");
    }
    else
    {
        printf("\nb is greater\n");
    }
   
}
