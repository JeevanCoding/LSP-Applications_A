
// LSP 

// 08/07/2023

// alt+ctrl+t   - to start terminal in  linux
// ls - command in linux / dir - command in windows
// cd Desktop
// mkdir LSP
// cd LSP
// ls
// clear

// touch Filesystem1.c - to create file
// gcc FileSystem1.c  - to compile
// ls - a.out file gets created (executable file but not purely executable)
// ./a.out  - to run

// gcc Filesystem1.c -o FileSystem1  - to compile
// ./FileSystem1  - to run

// FileSystem1 is exe

// ls - 
// ls -a (command flag or option) ->  . FileSystem1    a.out
//                                    .. FileSystem1.c

// man ls - information about commands
// q - to quit

// rm a.out - to delete regular files
// ls
// op - FileSytem1 FileSystem1.c 

// ls -i - inode number
// ex. op - 26254991 FileSystem1 26284127 FileSystem1.c

// ls -i - inode number
// ex. op - 26254991 FileSystem1 26284127 FileSystem1.c

// ls -i - inode number
// ex. op - 26254991 FileSystem1 26284127 FileSystem1.c

// stat FileSystem1.c - ss taken of op

// owner group other - permissions groups of 3

// 4096 - bytes means 4 blocks and 122 is total words in program

// clear

// ./FileSystem1 > Output  -> output redirection - Output.txt file gets created
// cat Output.txt  -> file gets open and " Jay Ganesh..." name gets displayed in .txt file

// ./FileSystem1 > Output  -> output redirection - Output.txt file gets created
// data gets overwrite

// ./FileSystem1 >> Output  -> output redirection - Output.txt file gets created
// >> - indicates append 

// editor - gedit and IDE - VS C.txtODE



#include<stdio.h>

int main(int argc, char *argv[])
{
	printf("Jay Ganesh...\n");
	
	return 0;
}

