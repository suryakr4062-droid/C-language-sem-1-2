#include<stdio.h>
int main()
{
	int i,j,o,n,m=1;
	
	printf("enter n:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",m);
		}
		m++;
		for(o=1;o<=(n-i);o++)
			{
				printf("*");
			}
		printf("\n");
	}
	return 0;
}
