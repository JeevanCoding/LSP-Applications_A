
// 15/07/2023

// Assignment 5 Q.3


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#inclue<unistd.h>
#include<fcntl.h>
#include<dirent.h>
#include<sys/stat.h>




int main(int argc,char *argv[])
{
	char irName[20];
	DIR *dp=NULL;
	
	struct dirent *entry=NULL;
	
	printf"Enter name of directory : \n");
	scanf("%s",DirName);
	
	dp=opendir(DirName);
	
	if(dp==NULL)
	{
		printf("Unable to open directory\n");
		
		return -1;
		
	}
	
	while((entry=readdir(dp))!=NULL)
	{
		printf("%s\n",entry->)
	}
	
	
	closedir(dp);
	
	return 0;
	
}

