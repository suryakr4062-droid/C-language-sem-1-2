#include<stdio.h>
int main()
{
	int i,j,o,n;
	
	printf("enter n:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		for(o=1;o<=(n-i);o++)
			{
				printf("*");
			}
		printf("\n");
	}
	return 0;
}
