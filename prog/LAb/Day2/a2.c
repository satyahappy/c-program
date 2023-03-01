#include<stdio.h>
int main()
{
	int d,y,w;
	d=1329;
	y=d/365;
	w=(d%365)/7;
	d=d-((y*365)+(w*7));
	printf("y=:%d\n",y);
	printf("w=:%d\n",w);
	printf("d=:%d\n",d);
	return 0;
}


