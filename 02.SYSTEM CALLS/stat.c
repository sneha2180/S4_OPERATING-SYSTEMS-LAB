#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>

int main(void)
{
	char *path1[10];
	struct stat *nfile;
	nfile=(struct stat *)malloc(sizeof(struct stat));
	printf("Enter name of file whose statistics has to be printed: ");
	scanf("%s",&path1);
	stat(path1,nfile);
	printf("User ID: %d \n", nfile->st_uid);
	printf("Block Size: %d \n", nfile->st_blksize);
	printf("Last Access Time: %d \n", nfile->st_atime);
	printf("Production Mode: %d \n", nfile->st_mode);
	printf("Size of file: %d \n", nfile->st_nlink);
}