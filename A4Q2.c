

/*

A4_Q2 : Write a program which accept directory name from user and create new directory of that name.

*/


#include<stdio.h>
#include<stdlib.h>
#include<dirent.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<unistd.h>

int main(int argc, char *argv[])
{
	char DirName[20];
	DIR *dp = NULL;
	struct stat sobj;
	
	if(argc != 2)
	{
		printf("Insufficient Arguments.\n");
		return -1;
	}
	
	dp = mkdir(argv[1],0777);
	
		if(dp == -1)
		{
			printf("Unable to create new directory.\n");
			return -1;
		}
		else
		{
			printf("Successfully created new directory.\n");
		}
	
	
	close(dp);
	
	return 0;
}