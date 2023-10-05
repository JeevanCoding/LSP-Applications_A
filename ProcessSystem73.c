

// Sir 74

// 30/07/2023

// demonstration of pthread and multithreading
// passing parameter to callback function

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<pthread.h>


// void *____(void *____)  
//{}

void *ThreadProc(void *ptr)			
{
	printf("Value received from main thread is : %d\n",(int)ptr);
	
	
}


int main()
{
	pthread_t TID;
	
	int ret=0;
	
	int no=11;
	
	ret=pthread_create(&TID,        	 // address of pthread_attr_t structure object
					   NULL,			 // thread attributes
					   ThreadProc,		 // address of callback function
					   (int *)no);		 // parameters to callback function
	
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


