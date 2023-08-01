
/*

A8Q1 : Write a program in which parent process waits till its child process terminates.

*/


#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>


int main()
{
	
	printf("Inside child process - PID of parent process is %d\n",getppid());
	
	
	return 0;
}


// gcc ProcessSystem56.c -o ChildProcess
// ./ChildProcess 


