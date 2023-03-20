#include <stdio.h>

int main()
{
    //1
    int power, number;
    int result = 1;
    int i = 0;

    //2
    printf("Enter a number : ");
    scanf("%d", &number);
    printf("Power : ");
    scanf("%d", &power);

    //3
    for (i = 0; i < power; i++)
    {
        result = result * number;
    }

    //4
    printf("%d to the power of %d is = %d\n", number, power, result);

    return 0;
}