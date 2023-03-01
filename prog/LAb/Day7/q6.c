#include<stdio.h>
int main()
{
    int a,b;
    printf("enter value of first:\n");
    scanf("%d",&a);
    printf("enter sceond:\n");
    scanf("%d",&b);
    printf("%d",sizeof(a%5)?b:a);
    return 0;
}
