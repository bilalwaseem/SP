#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
int main(int arg, char * args[], char ** env)
{
	struct stat buf;
	for(int i=1;i<arg;i++)
	{
			
					if(access(args[i],R_OK)==0)
					{
						printf("you haev read access to the file\n");
					}
					else
					{
						printf("you don't have read access to the file\n");
					}
					if(access(args[i],W_OK)==0)
					{
						printf("you have write access to the file\n");
					}
					else
					{
						printf("you don't have write access to the file\n");
					}
					if(access(args[i],X_OK)==0)
					{
						printf("you have exe access to the file\n");
					}
					else
					{
						printf("you don't have exe access to the file\n");
					}
					
			}
	}
	
	

