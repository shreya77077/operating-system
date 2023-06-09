#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>


int main(){
    int pid, ppid;
    pid = getpid();
    ppid = getppid();

    printf("process id %d \n",pid);
    printf("parent process id %d \n",ppid);
    return 0;



}
