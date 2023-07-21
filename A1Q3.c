

/*

A1_Q3 : Write a program which accept file name and on mode and that program check whether our process can access that file in accepted mode or not.

*/


#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<string.h>
#include<unistd.h>


int main(int argc, char *argv[])
{
	int Mode = 0;
	
	if(argc != 3)
	{
		printf("Invalid number of arguments. \n");
		return -1;
	}
	
	if(strcmp(argv[2], "read") == 0)
	{
		Mode = R_OK;
	}
	else if(strcmp(argv[2], "write") == 0)
	{
		Mode = W_OK;
	}
	else if(strcmp(argv[2], "execute") == 0)
	{
		Mode = X_OK;
	}
	
	if(access(argv[1], Mode) < 0)
	{
		printf("Unable to access %s file in %s Mode \n",argv[1],argv[2]);
	}
	else
	{
		printf("You can access %s file in %s mode \n",argv[1],argv[2]);
	}	

	 return 0;
}