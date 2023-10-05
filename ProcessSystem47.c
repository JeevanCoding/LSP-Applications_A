

// 23/07/2023

// fork()

// don't do this method , its wrong way

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main()
{
	
	
	fork();
	
	printf("Hello world : %d\n",getpid());
	
	
	
	return 0;
}





