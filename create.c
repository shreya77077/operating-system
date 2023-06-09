#include<stdlib.h>
#include<stdio.h>
#include<fcntl.h>
#include<errno.h>

int main(){
    int fd = creat("os.txt",O_CREAT);
    printf("fd %d",fd);

    if(fd >0){
        printf("successful ");
    }
    return 0;
}