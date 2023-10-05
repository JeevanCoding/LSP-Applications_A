

// Sir 76

// 05/08/2023

// problem statement 

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<pthread.h>


int Counter=0;

void *ThreadProc(void *ptr)			
{
	int i=0;
	
	Counter++;
	
	printf("Thread executes with Counter : %d\n",Counter);
	
	for(i=0;i<oxFFFFFFFF;i++);
	
	printf("Thread completed with Counter : %d\n",Counter);

	
	pthread_exit(NULL);
	
}


int main()
{
	pthread_t TID1,TID2;
	
	int ret=0;
	
	int no=11;
	
	int value=0;
	
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
	
	pthread_join(TID,&value);
	
	printf("Return value of thread is : %d\n",value);

	printf("End of main thread\n");
	
	return 0;
}


