#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>


void main(void)
{
	int status;
	pid_t cpid;
	cpid=fork();
	if (cpid == -1)
	{
		printf("Fork failed\n");
		exit(-2);
	}
	if (cpid == 0)
	{
	//	printf("child: PID: %ld\n",(long)getpid());
	//	printf("child: PPID: %ld\n",(long)getppid());
		exit(-1);
	}
	else
	{
		wait(&status);
	//	printf("Parent: PID: %ld\n",(long)getpid());
	//	printf("Parent: PPID: %ld\n",(long)getppid());
		if(WIFEXITED(status))
{
		printf("Normal termination exit status= %d\n",WEXITSTATUS(status));
}		
	}
 //       exit(1);
//effective user is when file is processed for permission check
//group id is user primary group
//effective is when gid bit is on and os check group for permission

}
