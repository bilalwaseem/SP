#include<stdio.h>
#include<stdlib.h>


int main(int arg, char * args[], char ** env)
{
	if(arg<=2)
	{
		exit -1;
	}
	
	int fd1=0;
	int fd2=0;

		if ( ( (fd1=open(args[1],0) )!=-1 ) && ((fd2=open(args[2],1) )!=-1) )
		{
			int n=255;
			char buff[256];
			while( (n=read(fd1,buff,255)) >0 )
			{
				write(fd2,buff,n);
			}
			fd1=open("temp",1);
		
			
			write(fd1,args[2],255);
			system("cat temp| rm ");
		}
		else
		{
			exit -1;
		}
			
}
