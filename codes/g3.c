#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>

// from a single c program fork and spawn a child process
// 1st child to run a compile command
// 2nd child to run the executable



int main(){
	int z = fork();

	if(z == 0)execlp("gcc","gcc", "g2.c","-o","b.out",NULL);
	wait(NULL);
	printf("compilation done...\nrunning b.out...\n");

	z = fork();
	if( z ==0 )execlp("./b.out","./b.out",NULL);
}

// to run , you need a test c file named g2.c in your folder
// run gcc g3.c, and ./a.out
