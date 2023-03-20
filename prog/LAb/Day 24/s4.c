#include<stdio.h>
#include<unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main()
{
        int fd;
        fd=open("hello.txt",O_RDONLY);
        if(fd==-1)
	{
		perror("No such file");
	}
	else
	{
		perror("file open");
	}

}

