#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>


int main(){
    int pid = fork();
    if(pid>0){
        printf("In Parent process");
    } else if(pid==0){
        sleep(30);
        printf("the child process");

    }
     //forkexample();
     return 0;

}
/*Orphan
A process whose parent process no more exists i.e. either finished or terminated without waiting
 for its child process to terminate is called an orphan process.
In the following code, parent finishes execution and exits while the child process is 
still executing and is called an orphan process now.

However, the orphan process is soon adopted by init process, once its parent process dies.*/
