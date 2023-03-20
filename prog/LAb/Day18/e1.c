#include<stdio.h>
#include<stdlib.h>

int main(){
    int n,a,b;
    enum {add,sub,mul,div,mod};
    printf("choice\n");
    scanf("%d",&n);
    switch(n)
    {
    case 0:
        printf("two num\n");
         scanf("%d %d",&a,&b);
        printf("sum is=%d",a+b);
        break;
    case 1:
        printf("two num\n");
         scanf("%d %d",&a,&b);
        printf("sub is=%d",a-b);
        break;
    case 2:
        printf("two num\n");
         scanf("%d %d",&a,&b);
        printf("mul is=%d",a*b);
        break;
    case 3:
        printf("two num\n");
         scanf("%d %d",&a,&b);
        printf("div is=%d",a/b);
        break;
    case 4:
        printf("two num\n");
         scanf("%d %d",&a,&b);
        printf("sum is=%d",a%b);
        break;
    default:
        printf("In valid syntax");
        break;
    }
}