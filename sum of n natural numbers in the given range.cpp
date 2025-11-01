#include<stdio.h>
int main()
{
	int sum=0,i,n,m;
	printf("enter the range you want:");
	scanf("%d%d",&m,&n);
	
	for(i=m;i<=n;i++)
	{
		sum +=i;
	}
	printf("sum=%d\n",sum);
	return 0;
}
