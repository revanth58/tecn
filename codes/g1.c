#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>
#include<stdlib.h>
#include<time.h>


int main(){
	printf("dvfhjbfvjrgr\n");

	int z = fork();
	if(z== 0){
		printf("i am child process with pid = %d and parent pid = %d\n",getpid(),getppid());
		printf("child : my array is at %p",&arr);
	}
	else{
		printf("my child is %d\n",z);
		printf("i am parent with pid = %d and parent pid = %d\n",getpid(),getppid());
	}

}

// to run "gcc g1.c", and then "./a.out"