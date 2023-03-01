#include<stdio.h>
#include<stdlib.h>
int main()
{
        char name[30],c;
        FILE *fp;
        printf("\n Enter new File Name:");
        scanf("%[^\n]",name);
        fp=fopen(name,"a"); //opening a file in append mode
        if(fp==NULL)
        {
                printf("\n Fail to create a File\n");
                exit(1);
        }
        printf("\nfile created successfully\n");
        printf("\nenter the data u want to store and press //ctrl+d save and exit");
        while((c=getchar()!=EOF))
        {
                putc(c,fp);
        }
        fclose(fp);
}

