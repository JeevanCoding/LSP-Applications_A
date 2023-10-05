

// 08/07/2023

#include<stdio.h>
#include<fcntl.h>  // file control system -  contains all system calls for filesubsystem



int main(int argc, char *argv[])
{
	int fd=0;
	int mode=0;
	
	
	printf("Usage : Name_of_Executable Name_Of_File\n");
	
	if(argc !=2)
	{
		printf("Invalid number of arguments\n");
		return -1;
	}
	
	
	fd=creat(argv[1],0777);
	
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







