#include<stdio.h>
int count();
int main()
{
    count();
    count();
    count();
    count();
    count();
}
int count ()
{
    static int count=0;
    count=count+1;
    printf("%d\t",&count);
}