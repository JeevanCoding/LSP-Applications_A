
/*

A7Q3 : Write a program which is used to create 2 shared library and that library should be loaded at run time by the other program.

		First library should contains function to check whether the input number is prime or not.
		Second library should contains function to check whether the input number is perfect or not.
	   
*/


#include "A7Q3_SharedFile.h"
#include<stdio.h>
#include<stdbool.h>

bool CheckPrime(int No)
{
	int flag = 1;
	
	for(int i = 2; i <= No/2; i++)
	{
		if(No % i == 0)
		{
			flag = 0;
			break;
		}
	}
	
	if(flag)
	{
		return true;
	}
	else
	{
		return false;
	}
}
