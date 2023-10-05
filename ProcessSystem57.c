

// 29/07/2023

// exec()

// risky code ...continuosly creating new processes 



#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>


int main()
{
	int Ret=0;
	
	Ret=fork();
	
	if(Ret==0)    // child
	{
		execl("./ChildProcess","Demo","NULL",NULL);
		
	}
	
	else      // parent
	{
		printf("Parent is running with PID : %d\n",getpid());
		
		while(1)
		{}
	}
	
	
	
	return 0;
}




// gcc ProcessSystem57.c -o Myexe
// ./Myexe

