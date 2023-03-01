#include<stdio.h>
#include"Arith.h"
int main()
{
	int num,num1;
	printf("enter the number");
	scanf("%d",&num);
	printf("enter the second number");
	scanf("%d",&num1);
	printf("add = %d",add(num,num1));
	printf("sub = %d",sub(num,num1));
	printf("mul = %d",multi(num,num1));
	printf("div = %f",div(num,num1));
	printf("mod = %f",mod(num,num1));
	printf("hello world");
	return 0;
}
