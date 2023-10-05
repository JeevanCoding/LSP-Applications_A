

// 09/07/2023

#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>  // file i/o
#include<stdlib.h>


// read system call

int main(int argc, char *argv[])
{
	int fd=0;
	int Ret=0;
	char *Buffer=NULL;
	
	if(argc!=3)
	{
		printf("Insuffient arguments\n");
	}


	fd=open(argv[1],O_RDONLY);
	
	if(fd==-1)
	{
		printf("Unable to open file\n");
		return -1;
	}
	
	Buffer=(char *)malloc(sizeof(atoi(argv[2])));
	
	
	Ret=read(fd,Buffer,atoi(argv[2]));
	
	if(Ret==0)
	{
		printf("Unable to read data from file\n");
		return -1;
	}
	
	printf("Data from file is :%s\n",Buffer);
	

	return 0;
	


}
