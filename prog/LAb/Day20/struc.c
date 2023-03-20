#include<stdio.h>
struct xyz
{
    int a;
    char c;
    double d;
}temp;
int main()
{
    printf("%d",sizeof(temp));
    return 0;
}