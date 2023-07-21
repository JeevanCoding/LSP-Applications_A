

/*

A1_Q2 : Write a program which accept file name and mode from user and open that file in specified mode.

*/


#include<stdio.h>
#include<fcntl.h>
#include<string.h>

int main(int argc, char *argv[])
{
	int fd = 0;
	int Mode = 0;
	
	if(argc != 3)
	{
		printf("Invalid number of arguments\n");
		return -1;
	}
	
	if(strcpy(argv[2], "Read") == 0 )
	{
		Mode = O_RDONLY;
	}
	else if(strcmp(argv[2], "Write") == 0 )
	{
		Mode = O_WRONLY;
	}
	
	fd = open(argv[1],Mode);
	
	if(fd == -1)
	{
		printf("Unable to open the file.\n");
		return -1;
	}
	else
	{
		printf("File is successfully opened with FD : %d\n", fd);
	}

	return 0;
}