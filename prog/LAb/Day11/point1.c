#include<stdio.h>
int main()
{
    int a=10;
    int *p=&a;
    a++;
    printf("value of a %d\n",a);
    printf("value of p %d\n",p);
    *p++;
    printf("value of p %d\n",p);
    return 0;
}