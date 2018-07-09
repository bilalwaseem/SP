#include<stdio.h>
#include<stdlib.h>
extern end,edata,etext;

void pp1()
{
	printf("\nsbrkis at : %lx",sbrk(0));
	
}

int main()
{

printf("\nEND: %lx",&end);
pp1();

int *p1=malloc(sizeof(int)*10);
pp1();
int *p2=malloc(sizeof(int)*20);
pp1();
int *p3=malloc(sizeof(int)*30);
pp1();
int *p4=malloc(sizeof(int)*40);
pp1();

for(int i=0;i<7;i++)
p1[i]=i;

for(int i=0;i<20;i++)
p2[i]=i;

printf("\np1 at : %lx",p1);
printf("\np1 at : %lx",p2);
printf("\np1 at : %lx",p3);
printf("\np1 at : %lx",p4);

for(int i=0;i<20;i++)
//printf("%d\n",p1[i]);

return 0;
}
