#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>

int main(){
    int pid =fork(),i;

    if (pid ==0){
        for(i+0;i<20;i++)
        printf("I am child");
    }
    else {("I am parent");
    while(1);
    }
    return 0;
}

/* Zombie
A process which has finished the execution but still has entry in the process table to
report to its parent process is known as a zombie process. A child process always first becomes
a zombie before being removed from the process table. The parent process reads the exit status of
 the child process which reaps off the child process entry from the process table.
In the following code, the child finishes its execution using exit() system call while 
the parent sleeps for 50 seconds, hence doesn’t call wait() and the child process’s entry 
still exists in the process table.*/
