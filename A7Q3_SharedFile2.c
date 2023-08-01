
/*

A7Q3 : Write a program which is used to create 2 shared library and that library should be loaded at run time by the other program.

		First library should contains function to check whether the input number is prime or not.
		Second library should contains function to check whether the input number is perfect or not.
	   
*/

#include "A7Q3_SharedFile.h"
#include<stdio.h>
#include<stdbool.h>

bool CheckPerfect(int iNo)
{
	int iCnt = 0, iSum = 0;
	
	for(iCnt = 1, iCnt <= (iNo/2), iCnt++)
	{
		if((iNo % iCnt) == 0)
		{
			iSum = Sum + iCnt;
		}
	}
	
	if(iSum == iNo)
	{
		return true;
	}
	else
	{
		return false;
	}
}
