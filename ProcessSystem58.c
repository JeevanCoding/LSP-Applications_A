
// Sir 59

// 29/07/2023

// exec()

// risky code 



#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>


int main()
{
	int Ret=0;
	
	Ret=fork();
	
	if(Ret==0)    // child
	{
		execl("./ChildProcess","NULL",NULL);
		
		
		
	}
	
	else      // parent
	{
		printf("Parent is running with PID : %d\n",getpid());
		
		sleep(1000);
	}
	
	
	
	return 0;
}



// gcc ProcessSystem58.c -o Myexe
// ./Myexe


