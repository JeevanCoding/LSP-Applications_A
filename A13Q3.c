
/*

A13Q3 : Write a program which creates such a process which accept signals from the terminal.

*/

#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>

void signal_handler(int signum) 
{
    if (signum == SIGINT) 
	{
        printf("Received SIGINT signal (Ctrl+C)\n");
    } 
	else if(signum == SIGTERM) 
	{
        printf("Received SIGTERM signal\n");
    }
}

int main() 
{
    pid_t child_pid = fork();

    if (child_pid == -1) 
	{
        printf("Error forking process");
        return -1;
    }

    if (child_pid == 0) 
	{
        // Child process

        // Register signal handlers
		
        signal(SIGINT, signal_handler);
        signal(SIGTERM, signal_handler);

        printf("Child process started. PID: %d\n", getpid());
        printf("Send SIGINT (Ctrl+C) or SIGTERM to this process.\n");

        // Loop indefinitely to keep the child process running
		
        while (1) 
		{
            sleep(1);
        }
    } 
	else 
	{
        // Parent process
        printf("Parent process started. Child PID: %d\n", child_pid);

        // Let the child process run for a while
        sleep(10);

        // Send SIGTERM signal to the child process
        if (kill(child_pid, SIGTERM) == -1) 
		{
            printf("Error sending SIGTERM signal");
            return -1;
        }
    }

    return 0;
}