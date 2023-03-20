#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p,n,i;
    printf("\n enter how many elemrent:");
    scanf("%d",&n);
    p=(int *)calloc(n*sizeof(int));
    if(p==NULL){
        fprintf(stderr,"\nfail to allocate memory\n");
        exit(1);
    }
    printf("\n memory allocated at: %x",p);
    printf("\n initial values \n");
    for(int i=0;i<n;i++)
    printf("%d",p[i]);
    for(int i=0;i<n;i++)
    p[i]=i+1;
    printf("\n");
    for(int i=0;i<n;i++)
    printf("%d",p[i]);
    printf("\n");
}