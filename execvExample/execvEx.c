#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<wait.h>// library for wait function

int main()
{
	
	int i, child_status;
	if(fork())
	{
		i=wait(&child_status);//first execute child process
		printf("Child process terminated");
	}
	else{
		
	
		char *arg[]={"./hello",NULL};//create hello file in one folder with this file
		execv("./hello",arg);
		printf("Child process sholud never get here\n");//it is for show that  execv function works
		exit(42);
	}
}
