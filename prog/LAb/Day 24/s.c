#include<stdio.h>
#include<unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main()
{
        int fd;
	char buf[20];
        fd=open("/home/satya/Workspace/hello.txt",O_RDWR|O_CREAT);
	write(fd,"hello world",12);
	read(fd,buf,20);
	printf("%s",buf);
	close(fd);
	
}
