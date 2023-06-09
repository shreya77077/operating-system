#include<stdio.h>
#include<fcntl.h>
#include<errno.h>
extern int errno;
int manin(){
   //if file does not have direc
   //then file too.txt is created
   int fd = open("foo.txt",O_RDONLY | O_CREAT);
   printf("fd =%d\n",fd);
   if(fd == -1){
    printf("error",errno);
    perror("program");
   }
   return 0;
} 