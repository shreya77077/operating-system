#include<stdio.h>
#include<fcntl.h>
#include<errno.h>
#include<sys/types.h>
#include<unistd.h>
#include<sys/stat.h>
//#include<shing.h>
#include<stdlib.h>

int main(){
    int sz;
    int fd = open ("open.txt",O_WRONLY|O_TRUNC|O_CREAT,0664)
    if(fd<0){
        perror("r1");
        exit(1);
    }
    sz = write(fd,"hello world \n",strlen("hello world"));
    //printf("called write %d ")
    printf("called write(% d, \"hello geeks\\n\", %d)."
    " It returned %d\n", fd, strlen("hello geeks\n"), sz);
    close(fd);
}