#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the value of 1st:\n");
    scanf("%d",&a);
    printf("Enter the value of 2nd:\n");
    scanf("%d",&b);
    if(a<50 && a<b)
    {
        printf("True");
    }
    else
    {
        printf("false");
    }
}
