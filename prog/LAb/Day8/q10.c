#include<stdio.h>
int r_area(int l,int w)
{
     int area;
     area=l*w;
     return area;
}
int r_perimeter(int l,int w)
{
     int p;
     p=2*(l+w);
     return p;
}
int main()
{
     int a,b,x,y;
     printf("Enter Length of Rectangle : ");
     scanf("%d",&a);
     printf("\nEnter Width of Rectangle : ");
     scanf("%d",&b);
     x=r_area(a,b); 
     y=r_perimeter(a,b); 
     printf("\nArea of Rectangle = %d\n\nPerimeter of Rectangle = %d",x,y);
     return 0;
}