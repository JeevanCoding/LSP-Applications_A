

// Sir 62

// 29/07/2023

// nice() - to change priority

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/resource.h>

int main()
{
	int ret=0;
	
	ret=nice(0);
	
	printf("current priority of process is %d\n",ret);
	
	ret=nice(10);
	
	printf("current priority of process is %d\n",ret);


	// -20 to 19 range of priority
	
	// -20 is highest priority
	// 19 is lowest priority
	// 0 is default priority
	
	return 0;
}

