
/*

A9Q4 : Write a program which is used to increase the priority by 5.

*/


#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/resource.h>

int main()
{
	int ret=0;
	
	ret=nice(0);
	
	printf("current priority of process is %d\n",ret);
	
	ret=nice(5);
	
	printf("current priority of process is %d\n",ret);


	// -20 to 19 range of priority
	
	// -20 is highest priority
	// 19 is lowest priority
	// 0 is default priority
	
	return 0;
}

