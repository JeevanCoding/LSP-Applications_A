
// 09/07/2023

#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>  // file i/o

// read system call

int main(int argc, char *argv[])
{
	int fd=0;
	char Buffer[20]={'\0'};
	int Ret=0;
	
	if(argc!=2)
	{
		printf("Insuffient arguments\n");
	}


	fd=open(argv[1],O_RDONLY);
	
	if(fd==-1)
	{
		printf("Unable to open file\n");
		return -1;
	}
	
	Ret=read(fd,Buffer,10);
	
	if(Ret==0)
	{
		printf("Unable to read data from file\n");
		return -1;
	}
	
	printf("Data from file is :%s\n",Buffer);
	

	return 0;
	
}


/*
	Example
	
1st block	21  	1024 bytes
2nd block  	87  	2048 bytes
3rd block	108		3072 bytes
4th block	78		4096 bytes


*/


