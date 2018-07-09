#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>

int main(int arg, char * args[], char ** env)
{
	int fd1=0;
	int fd2=0;
	dup2(1,2);
	close(1);
	if((fd2=open("f2",1) )!=-1 )
	{
		
		close(0);
		if((fd1=open("f1",0) )!=-1 )
		{
				int n=255;
				char buff[256];		
				{
					while( ( n=read(fd1,buff,255)) >0 )
						{
							write(fd2,buff,n);
						}
				}
		}
	}
	
	
			
}
