#pragma pack(1)
#include<stdio.h>
struct xyz
{
    unsigned int m:4;
    unsigned int d:5;
    unsigned y:12 ;
}del;
int main()
{
    printf("%d\n",sizeof(del));
    return 0;
}