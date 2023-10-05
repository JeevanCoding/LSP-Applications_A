

// Sir 66

// 30/07/2023

// demonstration of multiprocessing


#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>


int main()
{
	int ret1=0,ret2=0;
	
	ret1=fork();
	
	if(ret1==0)
	{
		execl("./Process1","NULL",NULL);
	}
	
	ret2=fork();
	
	if(ret2==0)
	{
		execl("./Process2","NULL",NULL);
	}
		
	
	return 0;
}


// gcc ProcessSystem65.c -o Myexe
// ./Myexe