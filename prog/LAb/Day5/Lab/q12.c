#include<stdio.h>
int main()
{
    int a,b,c,d,fd,rb,rg;
    printf("Enter the total no of students:\n");
    scanf("%d",&a);
    printf("Enter the total no of boys in class:\n");
    scanf("%d",&b);
    printf("Enter the percentage of scoring grade 'A':\n");
    scanf("%d",&c);
    printf("Enter the total no of boys scoring grade 'A':\n");
    scanf("%d",&d);
    fd=(a*c)/100;
    rg=fd-d;
    printf("The total no of girls scoring grade 'A' is :%d",rg);
    return 0;
}