#include<stdio.h>
int main()
{
	int num[100];
	int i,j,k,step;
	for (i=0;i<=99;i++)
	{	
		num[i]=i+1;
	}
	for (i=1;i<=99;i++)
	{
		if(num[i]!=0)
		{
			k=num[i]*2-1;
			step=num[j];
			for (j=1;j<=99;j=j+step)
			{
				num[j]=0;
			}
		}
	}

	printf("Prime numbers between 1 & 100 are:\n");
	
       	for (i=1;i<=99;i++)
	{
		if (num[i]!=0)
		{

			printf("%d\n",num[i]);
		}
	}
	return 0;

}
