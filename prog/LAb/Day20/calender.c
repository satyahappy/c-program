#include<stdio.h>
struct cal
{
    unsigned int m:4;
    unsigned int d:5;
    unsigned y:12 ;
}dat;
int main()
{
    int a,b,c;
    printf("\nEnter day:");
    scanf("%d",&a);
    printf("\nEnter month:");
    scanf("%d",&b);
    printf("\nEnter year:");
    scanf("%d",&c);
    dat.d=a;
    dat.m=b;
    dat.y=c;
    printf("\n\t\t\tCurrent date is %d.%d.%d\n",dat.d,dat.m,dat.y);
}