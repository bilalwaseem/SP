#include<stdio.h>
#include<stdlib.h>
int main()
{
	int size=10;
	int * arr= malloc(sizeof(int)*size);

	for(int i=0;i<size;i++)
	{arr[i]=i;
	printf("%d\n",arr[i]);}
	
	int *temp= realloc(arr,sizeof(int)*2*size);
	
	if(temp!=NULL)
	{
		printf("\nsize incremented\n");
		arr=temp;
		size=size*2;
	}
	else
	printf("reallocation of the array failed");
	
	
	for(int i=0;i<size;i++)
	{arr[i]=i;
	printf("%d\n",arr[i]);}
	
	
	free(arr);
	return 0;
}
