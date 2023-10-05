

// 23/07/2023


#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>


int main(int argc,char *argv[])
{
	printf("PID is : %d\n",getpid());
	printf("%s %s %s",argv[0]);
	
	
	
	return 0;
}



// gcc ProcessSystem53.c -o ChildProcess
// ./ChildProcess Hello Demo


