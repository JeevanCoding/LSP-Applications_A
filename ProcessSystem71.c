

// Sir 72

// 30/07/2023

// demonstration of pthread and multithreading

// multithread 

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<pthread.h>


// void *____(void *____)  
//{}

void *ThreadProc1(void *ptr)			
{
	int i=0;
	
	printf("inside thread 1\n");
	
	pthread_exit(NULL);
}

void *ThreadProc2(void *ptr)			
{
	int i=0;
	
	printf("inside thread 2\n");
	
	pthread_exit(NULL);
}

int main()
{
	pthread_t TID,TID2;
	
	int ret1=0,ret2=0;
	
	ret1=pthread_create(&TID1,         // address of pthread_attr_t structure object
					   NULL,		 // thread attributes
					   ThreadProc1,	 // address of callback function
					   NULL);		 // parameters to callback function
	
	if(ret1!=0)
	{
		printf("Unable to create thread\n");
		
		return -1;
	}
	
	printf("Thread is created with ID : %u\n"TID1);
	
	
	ret2=pthread_create(&TID2,         // address of pthread_attr_t structure object
					   NULL,		 // thread attributes
					   ThreadProc2,	 // address of callback function
					   NULL);		 // parameters to callback function
	
	if(ret2!=0)
	{
		printf("Unable to create thread\n");
		
		return -1;
	}
	
	printf("Thread is created with ID : %u\n"TID2);
	
	pthread_join(TID1,NULL);
	pthread_join(TID2,NULL);
	
	printf("End of main thread\n");

	
	pthread_exit(NULL);

	return 0;
}


