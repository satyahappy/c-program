#include<stdio.h>
int main()
{
	int mon,tue,wed;
	printf("enter mon temp:");
	scanf("%d",&mon);
	printf("enter tue temp:");
        scanf("%d",&tue);
	printf("enter wed temp:");
        scanf("%d",&wed);
	
	if(wed==mon)
	{
		printf("\ntemp of wed is same as mon");
	}
	else if ( wed == tue)
	{		
		 printf("\ntemp of wed is same as tue");

	}
	else
	{
		printf("\ntemp of wed is not same as pervious");
	}
	return 0;
}




