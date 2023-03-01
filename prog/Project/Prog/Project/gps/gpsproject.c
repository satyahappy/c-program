#include<stdio.h>
void main()
{ 
    int i;
    char c[]={"$GPGGA,181908.00,3404.7041778,N,07044.3966270,W,4,13,1.00,495.144,M,29.200,M,0.10,0000*40"};
    printf("The lattitude is:");
    for(i=16;i<=29;i++)
    {
    printf("%c",c[i]);
    }
    printf("\n");
    printf("The longitude is:");
    for(i=32;i<=35;i++)
    {
    printf("%c",c[i]);
    }
}
