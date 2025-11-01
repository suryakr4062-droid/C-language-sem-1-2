#include<stdio.h>
int main()
{
	int i=1,j=1,n=1;
	
	for(i=5;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d\t",n);
			n++;
		}
		printf("\n");
	}
	return 0;
}
