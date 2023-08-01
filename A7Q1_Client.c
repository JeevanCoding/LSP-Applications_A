
/*

A7Q1 : Write a program which is used to create shared library and that library should be loaded at run time by the other program.

		That library should contains function which accepts to perform the arithmetic operations like addition, substraction, division and multiplication.


*/

#include<stdio.h>
#include "A7Q1_SharedFile.h"

int main()
{
	int a = 21, b = 11;
	int Add = 0, Sub = 0, Mul = 0;
	float Div = 0.0f;
	
	Add = Addition(a,b);
	printf("Addition is : %d\n",Add);
	
	Sub = Substraction(a,b);
	printf("Substraction is : %d\n",Sub);
	
	Mul = Multiplication(a,b);
	printf("Multiplication is : %d\n",Mul);
	
	Div = Division(a,b);
	printf("Division is : %f\n",Div);

	return 0;
}
