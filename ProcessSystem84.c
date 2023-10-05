
// Sir 85

// 06/08/2023

// Server for shared memory

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
	
	printf("Shared memory allocated successfully....\n");

		
	ptr=shmat(shmid,NULL,0);
	
	if(ptr!=NULL)
	{
		printf("Shared memory attached successfully....\n");
	}
	
	*ptr='H';
	ptr++;
	
	
	*ptr='e';
	ptr++;
	
	
	*ptr='l';
	ptr++;
	
	
	*ptr='l';
	ptr++;
	
	
	*ptr='o';
	ptr++;
	
	
	*ptr='\0';
	ptr++;
	
	
	return 0;
}
	
	


// gcc ProcessSystem84.c -o Server
// ./Server

