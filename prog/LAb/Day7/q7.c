#include<stdio.h>
int main()
{
	int  password;
	printf("enter the password:");
	scanf("%d",&password);
	if ( password == 1234)
	{
		printf("matched");
	}
	else
	{
		printf(" not matched ");
	}
	return 0;
}
