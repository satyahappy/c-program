#include<stdio.h>
#include"tri.h"
int main()
{
	float p,h,b;
	printf("enter the p,h,b value:");
	scanf("%f%f%f",&p,&h,&b);
	printf("Trigonometric opartion of Sin:%f\n",Sin(p,h));
	printf("Trigonometric opartion of Cos:%f\n",Cos(b,h));
	printf("Trigonometric opartion of Tan:%f\n",Tan(p,b));
	return 0;
}



