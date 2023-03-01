#include<stdio.h>
static int a=10;
int main()
{
{
    static int a=20;
    printf("%d\n",a);
}

{
        static int a=30;
        printf("%d\n",a);
}
    {
        static int a=40;
        printf("%d\n",a);
    }
    printf("%d\n",a);
}