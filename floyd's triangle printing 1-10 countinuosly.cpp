#include<stdio.h>
int main()
{
	int num=1,n=10;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			printf("%d\t",num);
			num++;
		}
		printf("\n");
	}
	return 0;
}
