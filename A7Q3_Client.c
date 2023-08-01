
/*

A7Q3 : Write a program which is used to create 2 shared library and that library should be loaded at run time by the other program.

		First library should contains function to check whether the input number is prime or not.
		Second library should contains function to check whether the input number is perfect or not.
	   
*/


#include "A7Q3_SharedFile.h"
#include<stdio.h>
#include<stdbool.h>

int main()
{
	int iValue = 0;
	bool bRet = false;
	bool bAns = false;
	
	bRet = CheckPerfect(iValue);
	
	if(bRet == true)
	{
		printf("%d is a perfect number.\n",iValue);
	}
	else
	{
		printf("%d is not a perfect number.\n",iValue);
	}
	
	bAns = CheckPrime(iValue);
	
	if(bAns == true)
	{
		printf("%d is a prime number.\n",iValue);
	}
	else
	{
		printf("%d is a not prime number.\n",iValue);
	}

	return 0;
}

