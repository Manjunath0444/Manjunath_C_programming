#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
	char buff[256];
	int n=read(STDIN_FILENO,buff,255);
	write(STDOUT_FILENO,buff,n);
	return 0;
}

