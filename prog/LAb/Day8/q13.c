#include<stdio.h>
void series(int x,int y)
{
    int i,n;
    float ans=1;
    for(i = 1; i <= y; i++)
    {
        n =i*x;
         ans = ans + 1/n;
         ans++;
    }
    ans=ans+1;
    printf("sum of the series = %f",ans);
}
void main()
{
    int x,y;
    printf("Enter value of x: ");
    scanf("%d",&x);
    printf("Enter number of times ");
    scanf("%d",&y);
    series(x,y);
}