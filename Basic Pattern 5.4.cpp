#include<stdio.h>
int main()
{
	int i,j,n,m,k=1;
	scanf("%d",&n);
	
	for(i=n;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		for(m=1;m<=(n-i);m++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
