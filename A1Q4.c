

/*

A1_Q4 : Write a program which accept file name from user and print all information about that file.

*/


#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<sys/stat.h>

int main(int argc, char *argv[])
{
	struct stat sobj; //stat name cha structure cha object create kela.	
	
	if(argc != 2)
	{
		printf("Insufficient arguments.\n");
		return -1;
	}
	
	stat(argv[1],&sobj);
	
	printf("File name is : %s\n",argv[1]);
	printf("file inode number : %d\n",sobj.st_ino);
	printf("File size is : %d\n",sobj.st_size);
	printf("Number of link : %d\n",sobj.st_nlink);
	printf("File system number : %d\n",sobj.st_dev);
	printf("Number of blocks : %d\n",sobj.st_blocks);
	printf("Block size of file : %d\n",sobj.st_blksize);
	
	return 0;
}