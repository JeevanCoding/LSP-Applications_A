

// 08/07/2023


#include<stdio.h>

int main(int argc, char *argv[])
{
	int iNo1=0,iNo2=0,iAns=0;
	
	
	scanf("%d",&iNo1);
	scanf("%d",&iNo2);
	
	iAns=iNo1+iNo2;
	
	printf("Addition is : %d\n",iAns);
	
	
	return 0;
	
}


	
/*

gcc FileSystem5.c -o FileSystem5
./FileSystem5

10
11

Addition is : 21

touch Input.txt
rm Output.txt  - delete regular file

in Input.txt , write 10 11

gcc FileSystem5 -o FileSystem5
./FileSystem > Output







*/

// input redirection - to take the input
// output redirection - to display the output
// error redirection - to display the error