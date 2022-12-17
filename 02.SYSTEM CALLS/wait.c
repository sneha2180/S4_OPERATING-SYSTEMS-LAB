#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>

 int main()
{
	int pid,status,exitch;
	if((pid = fork()) == -1)
	 {
		 perror("Error!!");
		 exit(0);
	 }
	
  if(pid == 0)
   {
	sleep(3);
	printf("\n Child process");
	exit(0);
  }
  
  else
  {
	  printf("\n Parent process");
	  if((exitch = wait(&status))==-1)
		{
		  perror("During wait");
		  exit(0);
        }
     printf("\n Parent exiting!!");
     exit(0);
 }
 return 0;
}