#include<stdio.h>
struct xyz
{
    int a;
    char c;
    double d;
}__attribute__((packed))temp={10,'A',20.14};
int main()
{
    printf("%d\n",sizeof(temp));
    printf("%d %c %f",temp.a,temp.c,temp.d);
    return 0;
}