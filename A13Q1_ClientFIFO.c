
/*

A13Q1 : Write a program which creates two processes as reader and writer and that processes should communicate with each other using FIFO.

*/

// client for named pipe

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>
#include<sys/stat.h>


int main()
{
	int fd=0;
	
	char *path="/tmp/mypipe";
	
	char Buffer[100];
	
	printf("Client is running and reading the data from named pipe....\n");
	
	fd=open(path,O_WRONLY);
	
	read(fd,Buffer,10);
	
	printf("Data from pipe is : %s\n",Buffer);
	
	return 0;
}

// rm/tmp/mypipe  
// tmp/mypipe
// gcc ProcessSystem80.c -o Client
// ./Client

