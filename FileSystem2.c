
// 08/07/2023

// touch FileSystem2.c
// gcc FileSystem2.c -o FileSysyem2
// ./FileSystem2
// please enter your first name as command line argument
// ./FileSystem2 Jeevan
// Welcome to Marvellous : Jeevan


#include<stdio.h>

int main(int argc, char *argv[])
{
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

