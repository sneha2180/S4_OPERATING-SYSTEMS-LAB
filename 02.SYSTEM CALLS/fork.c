#include<stdio.h>
#include<unistd.h>
int main()
{
    int value = fork();
    printf("main :value is %d",value);
}