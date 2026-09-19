#include<stdio.h>
#include<unistd.h>

int main(){
    int k = fork();

    int *x = (int *)malloc(sizeof(int)*10);
    *x = 12;

    if(k==0){
        *x=10;

        printf("i am child, ptr = %p, value is %d")
    }
}