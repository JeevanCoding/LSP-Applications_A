

// 16/07/2023

// A1Q3

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>

int main(int argc,char *argv[])
{
	int mode=0;
	
	if(argc!=3)
	{
		printf("Insufficient arguments\n");
		
		return -1;
	}
	
	if(strcmp(argv[2],"read")==0)
	{
		mode=R_OK;
	}
	else if(strcmp(argv[2],"write")==0)
	{
		mode=W_OK;
	}
	
	else if(strcmp(argv[2],"execute")==0)
	{
		mode=X_OK;
	}
	
	
	
	return 0;
	
}


