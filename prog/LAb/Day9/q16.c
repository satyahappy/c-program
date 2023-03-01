#include<stdio.h>
int main()
{
int i,n,fact=1;
float sum=0.0;
printf("Enter Value of n:");
scanf("%d",&n);

for(i=1;i<=n;i++)
{
fact=fact*i;
sum=sum+(fact/i);
}
printf("The value of series is %.4f",sum);
}