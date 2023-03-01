#include<stdio.h>
int main(int argc,char *argv[])
{
	int i,sum=0,n;
	for(int i=0;i<argc;i++)
	{
		sscanf(argv[i],"%d",&n);
		sum=sum+n;
	}
	printf("%d",sum);
}


