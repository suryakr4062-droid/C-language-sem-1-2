#include<stdio.h>
int main()
{
	int n,i;
	printf("enter upto whick number you want:");
	scanf("%d",&n);
	
	for(i=2;i<=n;i+=2)
	{
		printf("%d\n",i);
	}
	return 0;
}
