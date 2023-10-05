
// 15/07/2023

// Assignment 5 Q.2


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#inclue<unistd.h>
#include<fcntl.h>



#pragma pack(1)

struct Student
{
	int Rollno;
	char Sname[20];
	float Marks;
	int Age;
};



int main(int argc,char *argv[])
{
	struct Student sobj;
	char Fname[20];
	int fd=0;
	
	
	strcpy(sobj.Sname,"Rahul");
	
	printf"Enter the file name : \n");
	scanf("%s",Fname);
	
	fd=open(Fname,O_RDONLY);
	
	read(fd,&sobj,sizeof(sobj));
	
	printf("Roll number : %d : \n",sobj.Rollno);
	printf("Name : %s : \n",sobj.Sname);
	printf("Marks : %f : \n",sobj.Marks);
	printf("Age : %s : \n",sobj.Age);

	close(fd);
	
	return 0;
	
}

