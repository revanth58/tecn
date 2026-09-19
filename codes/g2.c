#include<stdio.h>
#include<unistd.h>

// exec just replaces current process memory space, just starts running a new process
// in the same area, by area i mean same process id, same position in the process tree 
// same parent, permissions,...

int main(){
	// if you want to run a terminal command like,
	// lab@cn_lab:~# com arg1 arg2 arg3,.....
	// just call execlp("com","com","arg1","arg2","arg3",......., NULL);

	// to run a simple "ls -la" command
	execlp("ls","ls","-la",NULL);
}

// to run "gcc g2.c", then "./a.out"