

// 23/07/2023

// fork()

// how stack section get display... same copy for parent and child


#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>


void fun()
{
	int No=10;

	No++;
	
	printf("Running process  PID is %d : \n",getpid(),No);
}


int main()
{
	int Ret=0;
	
	fork();
	
	if(Ret==0)
	{
		fun();
	}
	else
	{
		fun();
	}
	
	

	return 0;
}





