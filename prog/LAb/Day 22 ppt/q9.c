#include <stdio.h>

int main()
{
   int x, y; //declaring two integer variable
   int product = 0; //initializing product to zero

   printf("Enter two integers:\n");
   scanf("%d%d", &x, &y);

   //loop to calculate product
   while(y != 0)
   {
      product += x;
      y--;
   }

   printf("\nProduct = %d\n", product);
   return 0;
}