
/*

A13Q5 : Write a program which creates two processes as sender and receiver in which sender process send signal to receiver process.

*/

#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>
#include <sys/types.h>

pid_t receiver_pid;

void receiver_signal_handler(int signum) 
{
    if (signum == SIGUSR1) 
	{
        printf("Receiver: Received SIGUSR1 signal from sender.\n");
    }
}

int main() 
{
    receiver_pid = fork();

    if (receiver_pid == -1) 
	{
        printf("Error forking process");
        return -1;
    }

    if (receiver_pid == 0) 
	{
        // Receiver process

        // Register signal handler for SIGUSR1
        signal(SIGUSR1, receiver_signal_handler);

        printf("Receiver process started. PID: %d\n", getpid());

        // Wait for the signal from the sender
        while (1) 
		{
            sleep(1);
        }
    } 
	else 
	{
        // Sender process

        printf("Sender process started. Receiver PID: %d\n", receiver_pid);

        // Send a SIGUSR1 signal to the receiver process
        printf("Sender: Sending SIGUSR1 signal to receiver.\n");
		
        kill(receiver_pid, SIGUSR1);

        // Wait for receiver to process the signal
        sleep(2);
    }

    return 0;
}

