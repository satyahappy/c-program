#include<stdio.h>
void change(int *,int);
int main()
{
	int a[]={2,4,6,8,10};
	int i;
	for (i=0;i<=4;i++)
	{
		printf("%d\n",a[i]);

	}
	return 0;
	void change(int *b,int n)
	{
		int i;
		for(i=0;i<n;i++)
		{
			*(b+i)=*(b+i)+5;
		}
	}
}
