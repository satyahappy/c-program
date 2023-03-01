#include<stdio.h>
int main()
{
	int num[25],i,neg=0,pos=0,odd=0,even=0;
	printf("Ener 25 elements of array");
	 for (i=1;i<=24;i++)
	 {
		scanf("%d",&num[i]);
	 }
	 for (i=1;i<=24;i++)
	 {
		 num[i]<0 ? neg++:(pos++);
		 num[i]%2 ? odd++:(even++);
	 }
	 printf("-ve element=%d\n",neg);
	 printf("+ve element=%d\n",pos);
         printf("even element=%d\n",even);
         printf("odd element=%d\n",odd);
	 
	 return 0;
}




