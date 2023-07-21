

/*

A5_Q2 : Write a program which accept file name from user which contains information of employee, we have to read all contents of that file.

*/


#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<string.h>
#include<unistd.h>

#pragma pack(1)
struct Student
{
	int Rollno;
	char Sname[10];
	float Marks;
	int Age;
};

int main(int argc, char *argv[])
{
	int fd = 0;
	char Fname[20];
	struct Student sobj;
	
	printf("Enter the file name : \n");
	scanf("%s",Fname);
	
	fd = open(Fname, O_RDONLY);
	
	read(fd,&sobj,sizeof(sobj));
	
	printf("Roll number : %d \n",sobj.Rollno);
	printf("Name : %s \n",sobj.Sname);
	printf("Marks : %f \n",sobj.Marks);
	printf("Age : %d \n", sobj.Age);
	
	close(fd);

	return 0;
}