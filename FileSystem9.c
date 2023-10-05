

// 08/07/2023

#include<stdio.h>
#include<fcntl.h>  // file control system -  contains all system calls for filesubsystem
#include<string.h>


int main(int argc, char *argv[])
{
	int fd=0;
	int mode=0;
	
	
	printf("Usage : Name_of_Executable Name_Of_File Mode_Of_Open\n");
	
	if(argc !=3)
	{
		printf("Invalid number of arguments\n");
		return -1;
	}
	
	if(strcpy(argv[2],"Read")==0)
	{
		Mode=O_RDON:Y;
	}
	else if(strcmp(argv[2],"Write")==0)
	{
		Mode=O_WRONLY;
	}
	else
	{
		Mode=O_RDONLY;
	}
	
	fd=open(argv[1],Mode);
	
	if(fd==-1)
	{
		printf("Unable to open file\n");
		return -1;
	}
	else
	{
		printf("File is successfully opened with fd : %d\n",fd)
	}
	
	return 0;
	
}







