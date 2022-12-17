#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>


int main()
{
	int pid;
	char*args[] = {"/bin/ls","-l",0};
	printf("\n Parent process ");
	pid =fork();
	if (pid ==0)
	{
		execv("/bin/ls",args);
		printf("\n Child Process");
	}
	else
	{

		printf("\n Parent Process");
		exit(0);
	}
}