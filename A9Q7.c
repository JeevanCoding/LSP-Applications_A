
/*

A9Q7 : Write a program which is used to print home directory and login user name.

*/



#include <stdio.h>
#include <stdlib.h>
#include <pwd.h>
#include <unistd.h>

int main()
{
	char *username=getlogin();
	
    if(username==NULL)
	{
        printf("Failed to get login username");
		
        return -1;
    }

    char *home_dir=getenv("HOME");
	
    if(home_dir==NULL)
	{
		printf("Failed to get home directory\n");
		
        return -1;
    }

    printf("Login Username: %s\n", username);
    printf("Home Directory: %s\n", home_dir);

    return 0;
}

