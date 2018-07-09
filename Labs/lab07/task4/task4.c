#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>

int main(int arg, char * args[], char ** env)
{
	int n=255;
	char buff[256];
	if(arg==1)
	{
		while( (n=read(0,buff,255)) >0 )
			{
				write(1,buff,n);
			}
	}
	
			
}
