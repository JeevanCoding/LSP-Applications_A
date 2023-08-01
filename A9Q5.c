
/*

A9Q5 : Write a program which is used to yield our processor by using appropriate system call.

*/


#include <stdio.h>
#include <sched.h>

int main()
{
	printf("Yielding the processor.......\n");
    
    int ret=sched_yield();
	
    if(ret==0)
	{
		printf("Processor yielded successfully\n");	
    }
	else
	{
		printf("Failed to yield the processor\n");

        return -1;
    }
    
    return 0;
}

