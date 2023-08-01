
/*

A7Q5 : Write a program which create static library which contains the file name from user and which displays the information of that file.

*/

#include "A7Q5_SharedFile.h"
#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<unistd.h>

int FileInfo(int argc, char *argv[])
{
	struct stat sobj;
	int fd = 0;
	
	fd = open("Demo.txt",O_RDONLY);
	
	fstat(fd,&sobj);
	

	printf("File size is : %d\n",sobj.st_size);
	printf("Number of links : %d\n",sobj.st_nlink);
	printf("Inode number : %d\n",sobj.st_ino);
	printf("File System number : %d\n",sobj.st_dev);
	printf("Number of blocks : %d\n",sobj.st_blocks);

	return 0;
}

