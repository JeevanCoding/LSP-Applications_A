
/*

A13Q2 : Write a program which creates child process and parent process will communicate with child process by sending signals.

*/


#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>
#include <sys/types.h>

pid_t child_pid;

void signal_handler(int signum) 
{
    if (signum == SIGUSR1) 
	{
        printf("Parent: Received SIGUSR1 signal. Sending signal to child.\n");
		
        // Send a SIGUSR2 signal to the child process
        kill(child_pid, SIGUSR2);
		
    } 
	else if (signum == SIGUSR2) 
	{
        printf("Child: Received SIGUSR2 signal.\n");
    }
}

int main() 
{
    // Register signal handler for SIGUSR1
    signal(SIGUSR1, signal_handler);

    child_pid = fork();

    if (child_pid == -1) 
	{
        printf("Error forking process");
        return -1;
    }

    if (child_pid == 0) 
	{
        // Child process

        // Register signal handler for SIGUSR2
        signal(SIGUSR2, signal_handler);

        printf("Child process started. PID: %d\n", getpid());

        // Wait for signals from the parent
        while (1) 
		{
            sleep(1);
        }
		
    } 
	else 
	{
        // Parent process
        printf("Parent process started. Child PID: %d\n", child_pid);

        // Send a SIGUSR1 signal to the child process
        printf("Parent: Sending SIGUSR1 signal to child.\n");
		
        kill(child_pid, SIGUSR1);

        // Wait for child to respond
        sleep(2);

        // Clean up: Send SIGUSR2 signal to child to terminate
        printf("Parent: Sending SIGUSR2 signal to child to terminate.\n");
		
        kill(child_pid, SIGUSR2);
    }

    return 0;
}


