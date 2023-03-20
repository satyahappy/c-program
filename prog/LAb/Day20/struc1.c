#pragma pack(1)
#include<stdio.h>
struct xyz
{
    int a;
    char c;
    double d;
}temp;
int main()
{
    printf("%d\n",sizeof(temp));
    printf("%p\t%p\t%p\t",&temp.a,&temp.c,&temp.d);
    return 0;
}