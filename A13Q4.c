
/*

A13Q4 : Write a program which accept user defined signal from terminal.

*/

#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>

void user_signal_handler(int signum) 
{
    printf("Received user-defined signal %d\n", signum);
}

int main() 
{
    // Register signal handler for user-defined signal (SIGUSR1)
	
    signal(SIGUSR1, user_signal_handler);

    printf("Process started. PID: %d\n", getpid());
    printf("Send a user-defined signal (SIGUSR1) to this process.\n");

    // Loop indefinitely to keep the process running
	
    while (1) 
	{
        sleep(1);
    }

    return 0;
}


/* after running
 
kill -SIGUSR1 <process_pid>

*/

 