#include<stdio.h>
int counter(int count)
{
    return count=count;
}
int main()
{
    int a;
    int count=0;
    int i;
    printf("enter the value to print number of times\n");
    scanf("%d",&a);
    for(i=0;i<=a;i++)
    {
        count=counter(i);

    }
    printf("No of times are:%d\n",count);
    return 0;

}