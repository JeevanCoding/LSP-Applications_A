
/*

A12Q2 : Write a program which creates two processes and that two processes can communicate with each other by using concept of shared memory.

*/

// Client for shared memory

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>
#include<sys/stat.h>
#include<sys/shm.h>


int main()
{
	int shmid=0;
	int shmsize=100;
	int key=1234;
	char *ptr=NULL;
	
	printf("Client application running....\n");
	
	shmid=shmget(Key,shmsize,0666);
		
	ptr=shmat(shmid,NULL,0);
	
	if(ptr!=NULL)
	{
		printf("Shared memory attached successfully....\n");
	}
	
	return 0;
}


// gcc ProcessSystem83.c -o Client
// ./Client

