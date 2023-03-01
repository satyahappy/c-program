#include<stdio.h>
int main()
{
   int a=3,b=4,c=0,d=5,m;
   m = a++ && b++ && c++ || d++;
   printf("%d\n%d\n%d\n%d\n%d",a,b,c,d,m);
   return 0;
}