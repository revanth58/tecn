#include<stdio.h>
#include<pthread.h>
#include<stdlib.h>
#include<time.h>


// main function for the threads
void *func(void *arg){
	printf("i am thread, my id is %lu, value is %d\n",(unsigned long)pthread_self(), *(int *)arg);
}

int main(){

	// pthread_t is a datatype to store a variable, which 
	// will be used to reference a thread. in this case 
	// we have 10 threads, we can reference each thread using 
	// ti[0], t1[1],.....t1[9]
	pthread_t t1[10];

	// array of random values, we will pass a value to each thread as argument
	int arr[10];
	srand(time(NULL));

	for(int i=0;i<10;i++)arr[i] = 100 + rand()%900;

	for(int i=0;i<10;i++){
		// thread create function. to understand the 
		// arguments, read the tutorial i gave in the github site
		pthread_create(&t1[i],NULL, func,(void *)(arr + i));
	}
	
	for(int i=0;i<10;i++){
		pthread_join(t1[i], NULL);
	}
	
}

// to run "gcc pt1.c -pthread" and then "./a.out"