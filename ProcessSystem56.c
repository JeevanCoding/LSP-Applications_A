

// 29/07/2023

// exec()


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


