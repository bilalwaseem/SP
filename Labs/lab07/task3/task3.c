#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>

int main(int arg, char * args[], char ** env)
{
	if(arg<=1)
	{
		exit -1;
	}
	
	int fd1=0;
	int fd2=0;

		if ( ( (fd1=open("/etc/shadow",0) )!=-1 ) && ((fd2=open(args[1],O_CREAT|O_WRONLY) )!=-1) )
		{
			int n=255;
			char buff[256];
			while( (n=read(fd1,buff,255)) >0 )
			{
				
				write(fd2,buff,n);
			}
			
		}
		else
		{
			exit -1;
		}
			
}
