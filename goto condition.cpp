#include<stdio.h>
int main()
{
	int n=0;
	p:
		printf("%d.hello\n",n);
		n++;
		if(n<=100)
	goto p;
	
	return 0;
}

