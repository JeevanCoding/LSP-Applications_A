

// 23/07/2023

// exec()

// execl,execv,exece,execp
// creating parent and passing execl

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>


int main()
{
	int Ret=0;
	
	Ret=fork();
	
	if(Ret==0)    // child
	{
		execl("./ChildProcess","Demo","Hello","Marvellous",NULL);
		
		// parameter 1 : name of executable
		// parameter 2 : multiple values separated by, which are considered as
		// 
		
	}
	
	else      // parent
	{
		printf("Parent is running with PID : %d\n",getpid());
		
	}
	
	
	
	return 0;
}




// gcc ProcessSystem54.c -o Myexe
// ./Myexe