#include<stdio.h>
int main()
{
	int i,j,n,space;
	
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		for(space=1;space<=(n-i);space++)
		{
			printf(" ");
		}
			
		for(j=1;j<=i;j++)
		{
			printf("* ");
		}
		for(space=1;space<=(n-i);space++)
		{
			printf(" ");
		}
		printf("\n");
	}
	return 0;
}
