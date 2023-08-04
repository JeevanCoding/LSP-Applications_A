
/*

A10Q4 : Write a program which creates single thread and it accept one value from user and it return some value to the caller thread.

*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<pthread.h>

void * ThreadProc(void *ptr)
{
	int i = (int)ptr;
	printf("Value received from main thread is : %d\n",(int)ptr);
	pthread_exit(++i);
}

int main()
{
	pthread_t TID;
	int iNo = 0;
	int iRet = 0;
	int value = 0;
	
	printf("Enter  number : \n");
	scanf("%d",&iNo);
	
	iRet = pthread_create(&TID,
				NULL,
				ThreadProc,
				(int *)iNo);
				
	if(iRet != 0)
	{
		printf("Unable to create thread.\n");
		return -1;
	}
	
	printf("Thread is created with ID : %d\n",TID);
	
	pthread_join(TID,&value);
	printf("Return value from thread is %d\n",value);
	
	printf("End of the main.\n");
	
	return 0;
}
