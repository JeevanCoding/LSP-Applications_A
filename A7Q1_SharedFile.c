
/*

A7Q1 : Write a program which is used to create shared library and that library should be loaded at run time by the other program.

		That library should contains function which accepts to perform the arithmetic operations like addition, substraction, division and multiplication.


*/

#include "A7Q1_SharedFile.h"


int Addition(int no1, int no2)
{
	int iAns = 0;
	iAns = no1 + no2;
	return iAns;
} 

int Substraction(int No1, int No2)
{
	int Ans = 0;
	Ans = No1 - No2;
	return Ans;
}

int Multiplication(int iNo1, int iNo2)
{
	int Result = 0;
	Result = iNo1 * iNo2;
	return Result; 
}

int Division(int num1, int num2)
{
	float iResult = 0.0f;
	iResult = num1 / num2;
	return iResult;
}
