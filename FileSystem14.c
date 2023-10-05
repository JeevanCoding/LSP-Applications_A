

// 09/07/2023

#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>  // file i/o
#include<stdlib.h>


// read system call
// to read data from any file

#define BLOCKSIZE 1024


int main(int argc, char *argv[])
{
	int fd=0;
	int Ret=0;
	char Buffer[BLOCKSIZE];
	
	
	if(argc!=2)
	{
		printf("Insuffient arguments\n");
		return -1;
	}


	fd=open(argv[1],O_RDONLY);
	
	if(fd==-1)
	{
		printf("Unable to open file\n");
		return -1;
	}
	
	while((Ret=read(fd,Buffer,sizeof(Buffer)))!=0)
	{
		write(1,Buffer,Ret);
		
	}
	
	close(fd);
	
	
	return 0;
}



