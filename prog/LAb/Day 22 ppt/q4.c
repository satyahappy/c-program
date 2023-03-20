#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2,num3;
    printf("Enter three numbers\n");
    scanf("%d %d %d",&num1,&num2,&num3);
//takes input from user
    //checking num1 is a middle number or not
    if(num2>num1 && num1>num3 || num3>num1 && num1>num2){
        printf("\n%d is a middle number",num1);
    }

    //checking num2 is a middle number or not
    if(num1>num2 && num2>num3 || num3>num2 && num2>num1){
        printf("\n%d is a middle number",num2);
    }

    //checking num3 is a middle number or not
    if(num1>num3 && num3>num2 || num2>num3 && num3>num1){
        printf("\n%d is a middle number",num3);
    }
    return 0;
}