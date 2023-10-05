

// Sir 68

// 30/07/2023

// demonstration of pthread and multithreading
// technically right logically wrong ( parent has to stop)  - parent gets terminated before child thread gets executed

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<pthread.h>


// void *____(void *____)  
//{}

void *ThreadProc(void *ptr)			
{
	printf("Inside thread\n");
}


int main()
{
	pthread_t TID;
	
	int ret=0;
	
	ret=pthread_create(&TID,         // address of pthread_attr_t structure object
					   NULL,		 // thread attributes
					   ThreadProc,	 // address of callback function
					   NULL);		 // parameters to callback function
	
	if(ret!=0)
	{
		printf("Unable to create thread\n");
		
		return -1;
	}
	
	printf("Thread is created with ID : %u\n"TID);
	
	return 0;
}


