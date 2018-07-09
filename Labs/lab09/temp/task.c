#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<sys/stat.h>

int main(int arg, char * args[])
{
	

	struct stat buf;
	
	for(int i=1;i<arg;i++)
	{		
		printf("--------------------------------------------\n");
			if( (stat(args[i],&buf)) <0 ) 
			{printf("error in file\n");exit(0);}
			
					if(S_ISDIR(buf.st_mode))
					{
						printf("%s is directory\n",args[i]);
						printf("%d",buf.st_uid);
					}
					else if(S_ISREG(buf.st_mode))
					{
						printf("%s is regular file\n",args[i]);
						printf("\n%d is inode\n %d is the last access time\n%d is the last modified date\n %d is the size\n",buf.st_ino,buf.st_atime,buf.st_mtime,buf.st_size);
	
					}
					else
					{
						printf("%s is other\n",args[i]);
					}
					
		
	}
	printf("--------------------------------------------\n");
}
	
	

