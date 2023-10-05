

// 08/07/2023

// touch FileSystem3.c
// gcc FileSystem3.c -o FileSysyem3
// ./FileSystem3
// please enter your first name as command line argument
// ./FileSystem2 Jeevan
// 


#include<stdio.h>

int main(int argc, char *argv[])
{
	printf("Name of application : %s\n",argv[0]);
	
	if(argc==1)
	{
		printf("please enter your first name as command line argument");
		return -1;
	}
	else
	{
		printf("Welcome to Marvellous : %s\n",argv[1]);
		return 0;
	}	
}

