

/*

A3_Q4 : Write a program which accept directory name from user and delete all empty files from that directory.

*/


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<fcntl.h>
#include<dirent.h>
#include<sys/stat.h>

int main(int argc, char *argv[])
{
	char DirName[20];
	char namecopy[30]= {'\0'};
	DIR *dp = NULL;
	struct stat obj;
	char name[30];
	struct stat sobj;
	struct dirent *entry = NULL;
	int iMax = 0;
	
	printf("Enter directory name : \n");
	scanf("%s",DirName);
	
	dp = opendir(DirName);
	if(dp == NULL)
	{
		printf("Unable to open the file. \n");
		return -1;
	}
	
	while((entry = readdir(dp)) != NULL)	
	{
		sprintf(name,"%s/%s",DirName,entry->d_name);
		stat(name,&sobj);
		if(S_ISREG(sobj.st_mode))
		{
			if(sobj.st_size == 0)
			{
				remove(name);
			}
		}
	}
	
	closedir(dp);

	return 0;	
}