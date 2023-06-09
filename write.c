#include<stdio.h>
#include<fcntl.h>
#include<errno.h>

int main(){
    int sz,fd;
    fd = open("open.txt",O_WRONLY|O_TRUNC|O_CREAT,0644)
    if (fd == -1){
        printf("error");
        exit(1);
    }
    sz = write(fd,"hello muj",40);
    return 0;

}
