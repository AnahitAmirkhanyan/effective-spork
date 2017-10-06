#include <stdio.h>
#include <unistd.h>
int main()
{
	pid_t  child;
	int p;
	p=getpid();
	printf("The main program process ID is %d\n", p);
	child = fork();
	printf("This is a minimal C program\n");
	if(child != 0)
		printf("This is the parent process.\n");
	
	else
		printf("This is the child process.\n");
	return 0;
}
