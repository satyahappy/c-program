#pragma pack(1)
#include<stdio.h>
struct DAT
{
    unsigned int m:4;
    unsigned int d:5;
    unsigned y:12 ;
}__attribute__((packed))DATE;
int main()
{
    printf("%d\n",sizeof(DATE));
    return 0;
}