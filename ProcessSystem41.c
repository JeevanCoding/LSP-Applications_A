
// 23/07/2023

// getpid() 

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main()
{
	int PID=0;
	
	PID=getpid();
	
	printf("PID of running process is :%d\n",PID);
	
	return 0;
}

// ps(process status) command - list of processes
// man ps command
// ps -A command -  total processes active
// tty - TeleType Terminal