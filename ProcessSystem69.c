

// Sir 70

// 30/07/2023

// demonstration of pthread and multithreading

// solution - pthread_join() 

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<pthread.h>


// void *____(void *____)  
//{}

void *ThreadProc(void *ptr)			
{
	int i=0;
	
	for(i=0;i<1000;i++)
	{
		printf("thread with counter : %d\n",i);
	}
	
	
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
	
	pthread_join(TID,NULL);
	
	printf("End of main thread\n");
	
	return 0;
}


