#include<stdio.h>
int add(int *,int *);
int sub(int *,int *);
int mul(int *,int *);
int div(int *,int *);
int mod(int *,int *);
int main()
{
    int a=10,b=20;
    printf("Addition of two numbers is %d\n",add(&a,&b));
    printf("subtraction of two numbers is %d\n",sub(&a,&b));
    printf("multiplication of two numbers is %d\n",mul(&a,&b));
    printf("division of two numbers is %d\n",div(&a,&b));
    printf("mod of two numbers is %d\n",mod(&a,&b));
    return 0;
}
int add(int *p,int *q)
{
    return *p+*q;
}
int sub(int *p,int *q)
{
    return *p-*q;
}
int mul(int *p,int *q)
{
    return *p * *q;
}
int div(int *p,int *q)
{
    return *p / *q;
}
int mod(int *p,int *q)
{
    return *p%*q;
}
