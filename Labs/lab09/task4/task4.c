#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<sys/stat.h>

int main(int arg, char * args[])
{
	printf("test");

	struct stat buf;
	
	for(int i=1;i<arg;i++)
	{
		printf("loop");
		printf("%s",args[i]);
		
			if( (stat(args[i],&buf)) <0 ) {printf("error in file\n");exit(0);}
			
			{
				printf("start");
					if(S_ISDIR(buf.st_mode))
					{
						printf("%s is directory",args[i]);
					}
					else if(S_ISREG(buf.st_mode))
					{
						printf("%s is regular file",args[i]);
					}
					else
					{
						printf("%s is other",args[i]);
					}
					
					printf("%s is inode\n%sis the last access time\n%s is the last modified date\n%s is the size",buf.st_ino,buf.st_atime,buf.st_mtime,buf.st_size);
			}
	}
	
	
}
