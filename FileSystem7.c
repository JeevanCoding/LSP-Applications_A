


// 08/07/2023

#include<stdio.h>
#include<fcntl.h>  // file control system -  contains all system calls for filesubsystem

int main(int argc, char *argv[])
{
	if(argc !=2)
	{
		printf("Invalid number of arguments\n");
		return -1;
	}
	
	fd=open(argv[1],O_RDONLY);
	
	if(fd==-1)
	{
		printf("Unable to open file\n");
		return -1;
	}
	else
	{
		printf("File is successfully opened with fd : %d\n",fd);
	}
	
	
	return 0;
	
}




// O_RDONLY  Read mode
// O_RDWR    Read+ write mode
// O_WRONLY  Write mode
// O_CREATE  Create mode
		 



// man open
// man cp

// cp Fileystem6.c FileSystem7.c 
//