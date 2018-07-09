#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>

int main(int arg, char * args[], char ** env)
{	
	int fd1=0;
	int fd2=0;
		if ( ( (fd2=open("/etc/passwd",0) )!=-1 ) )
		{
			
			fd1=dup(fd2);
			int n=255;
			char buff[256];
			while( (n=read(fd1,buff,255)) >0 )
			{
				write(1,buff,n);
			}
		}
		else
		{
			exit -1;
		}
			
}
