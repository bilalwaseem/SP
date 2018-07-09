#include<stdio.h>
#include<setjmp.h>

static jmp_buf envbuf;

void firstjump(int c)
{
	printf("first jump with counter %d\n",c);
	
	longjmp(envbuf,++c);
}
void havefun(int c)
{
	printf("havefun with counter %d\n",c);
	longjmp(envbuf,++c);
}

int main()
{
	int counter=-1;
	printf("initial value of counter %d\n",counter);

	counter=setjmp(envbuf);
	
	if(counter == 0)
	{
		firstjump(counter);
	}
	else if(counter == 1)
	{
	havefun(counter);
	}
	printf("final value of counter %d\n",counter);

	return 0;
}
