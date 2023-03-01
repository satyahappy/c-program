#include<stdio.h>
int main()
{
	float i,j,k,l,a;
	printf("weight of item1:");
	scanf("%f",&i);
	printf("weight of item2:");
        scanf("%f",&j);
	printf("no.of item1 purchases:");
	scanf("%f",&k);
	printf("no.of item2 purchases:");
        scanf("%f",&l);
	a=((i*k)+(j*l))/(k+l);
	printf("a value-%f",a);
	return 0;
}




