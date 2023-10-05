

// Sir 60

// 29/07/2023

// wait()

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>


int main()
{
	int Ret=0;
	int cpid=0;
	int Exit_status=0;
	
	Ret=fork();
	
	if(Ret==0)    // child
	{
		execl("./ChildProcess","NULL",NULL);
			
	}
	
	else      // parent
	{
		printf("Parent is running with PID : %d\n",getpid());
		
		cpid=wait(&Exit_status);
		
		printf("Child process terminated having PID %d with exit status %d\n",cpid,Exit_status);
		
		
	}
	
	
	
	return 0;
}



// gcc ProcessSystem59.c -o Myexe
// ./Myexe


