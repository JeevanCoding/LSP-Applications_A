
/*

A10Q2 : Write a program which creates two threads,first thread print numbers from 1 to 500 & other thread print the numbers from 500 to 1.

*/


#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<fcntl.h>
#include<pthread.h>

//void *___(vood *____)
// { }

void * ThreadProc1(void *ptr)
{
	int i = 0;
	
	for(i = 1; i <= 500; i++)
	{
		printf("Thread counter is %d\n",i);
		printf("-------------------------------- \n");
	}
	
	pthread_exit(NULL);
}

void * ThreadProc2(void *ptr)
{
	int iCnt = 0;
	
	printf("\n-------------------------------------------\n");
	for(iCnt = 500; iCnt >= 1; iCnt--)
	{
		printf("Reverse Thread Counter is : %d\n",iCnt);
	}
	
	pthread_exit(NULL);
}

int main()
{
	pthread_t TID1, TID2;
	int ret1 = 0;
	int ret2 = 0;
	
    ret1 = pthread_create(&TID1,   //Address of pthread_attr_t structure object
			     NULL,	//Thread attributes
			     ThreadProc1,   //Address of callback function
			     NULL);	//Parameters of callback function
			     
	if(ret1 != 0)
	{
		printf("Unable to create thread.\n");
		return -1;
	}
	
	printf("Thread1 is created with ID : %d\n",TID1);
	
	ret2 = pthread_create(&TID2,   //Address
			     NULL,	//Thread attributes
			     ThreadProc2,   //Address of callback function
			     NULL);	//Parameters of callback function
			     
	if(ret2 != 0)
	{
		printf("Unable to create thread.\n");
		return -1;
	}
	
	printf("Thread2 is created with ID : %d\n",TID2);
	
	pthread_join(TID1,NULL);
	pthread_join(TID2,NULL);
	
	printf("End of main thread\n");
	
	pthread_exit(NULL);

	return 0;
}