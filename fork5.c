#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>


int main(){
     fork(); //A
     (fork()/*B*/ && fork /*C*/)
     //fork(); /*D*/
     fork();//E
     return 0;

}
