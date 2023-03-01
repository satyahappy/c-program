#include<stdio.h>
#include<conio.h>
void main()
{
int i,x,y, ans; 
ans=1;
printf("Enter the value of x");
scanf("%d", &x);
printf("Enter the value of y");
scanf("%d", &y);
for(i=1; i<=y; i++)
{
ans= ans*x;
}
printf(" %d to the power %d is %d", x, y, ans);
getch();
}