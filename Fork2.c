#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>

int main(){
    int i;
    for(i=0;i<5;i++){
        if(fork()==0){
            printf("child pid %d and parent pid %d \n",getpid(),getppid());
            exit (0);
        }
    }
    int i;
    for(i=0;i<5;i++){
        wait(NULL);
    }
}
