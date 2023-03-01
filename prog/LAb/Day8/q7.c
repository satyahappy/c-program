
#include <stdio.h>
int add(int p, int q)
{
    return p + q;
}
int sub(int p, int q)
{ 
    return p - q;
}
int mul(int p, int q)
{ 
    return p * q;
}
float div(int p, int q)
{
    return (float)p / q;
}
int mod(int p, int q)
{ 
    return p % q;
}
int main()
{
    int p, q;
    printf("Enter any two positive integer numbers:\n");
    scanf("%d %d",&p,&q);
    printf("\nAddition of %d + %d = %d\n", p, q,add(p, q));
    printf("Subtraction of %d - %d = %d\n", p, q, sub(p, q));
    printf("Multiplication of %d * %d = %d\n", p, q, mul(p, q));
    printf("Division of %d / %d = %f\n", p, q, div(p, q));
    printf("Modulus of %d %% %d = %d\n", p, q, mod(p, q));
    return 0;
}