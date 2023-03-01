#include<stdio.h>
#include<stdlib.h>
int main()
{
        char name[30],ch;
        FILE *fp;
        printf("\n Enter new File Name:");
        scanf("%[^\n]",name);
        fp=fopen(name,"w+");
        if(fp==NULL)
        {
                printf("\n Fail to create a File\n");
                exit(1);
        }
        printf("\nfile created successfully\n");
	printf("\nEnter data into File & Press \"ctrl+d\" to end\n");
	while((ch=getchar())!=EOF)
		putc(ch,fp);
	fseek(fp,0,SEEK_SET);
	printf("\n\n Data in File \n");
	while((ch=getc(fp))!=EOF)
		putchar(ch);
	fclose(fp);

}


