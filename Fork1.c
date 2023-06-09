#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>

void forkexample(){
    if(fork ()==0){
        printf("hello from parent");
    }
    else{
        printf("hello from child");
    }
}
int main(){
     forkexample();
     return 0;

}
