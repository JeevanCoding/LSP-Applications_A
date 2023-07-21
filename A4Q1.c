

/*

A4_Q1 : Write a program which is used to demonstrate concept of I/O redirection.

*/


#include<stdlib.h>

int main(int argc, char *argv[])
{
	int iNo1 = 0, iNo2 = 0;
	int Ret = 0, iAns = 0;
	
	Ret = iNo1 + iNo2;
	//iAns = iNo1 - iNo2;
	
	printf("Addition is : %d\n",Ret);
	//printf("Substraction is : %d\n",iAns);
	
	return 0;
}