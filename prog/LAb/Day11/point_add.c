#include<stdio.h>
int add (int *,int *);
int main()
{
    int a=10,b=20;
    printf("Addition of two numbers is %d\n",add(&a,&b));
}
int add (int *p,int *q)
{
    return *p+*q;
}