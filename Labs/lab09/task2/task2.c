#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>

int main(int arg, char * args[], char ** env)
{	
	int fd1=0;
	int fd2=0;
	int fd3=0;
	((fd2=open("errorandoutput",O_CREAT|O_WRONLY) )!=-1 );
			close(1);
			close(2);
			fd1=dup(fd2);
			fd2=dup(fd2);
		
		if ( ( (fd3=open("temp",0) )!=-1 )) 
				{	
			
			
			int n=255;
			char buff[256];
			while( (n=read(fd3,buff,255)) >0 )
			{
				write(fd1,buff,n);
			}
		}
		else
		{
			exit -1;
		}
			
}
