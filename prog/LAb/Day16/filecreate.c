#include<stdio.h>
#include<stdlib.h>
int main()
{
        char name[30];
        FILE *fp;
        printf("\n Enter new File Name:");
        scanf("%[^\n]",name);
        fp=fopen(name,"w");
        if(fp==NULL)
        {
                printf("\n Fail to create a File\n");
                exit(1);
        }
        printf("\nfile created successfully\n");
}

