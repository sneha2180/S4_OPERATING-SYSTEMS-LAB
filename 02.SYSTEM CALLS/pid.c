#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<stdlib.h>

int main()
{
	int pid;
	pid=getpid();
	printf("%d",pid);
	pid=getppid();
	printf("%d",pid);
}