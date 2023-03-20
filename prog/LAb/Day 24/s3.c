#include<stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
int main()
{

        int fd;
        off_t offset;

        char buf[20];
        fd=open("/home/satya/Workspace/hello.txt",O_RDWR|O_CREAT|O_APPEND);


        write(fd,"hello world",15);
        offset=lseek(fd,1,SEEK_SET);

        read(fd,buf,20);
        printf("%s",buf);
        close(fd);

}
