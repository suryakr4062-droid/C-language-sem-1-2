#include<stdio.h>
int main()
{
	int a,b,i;
	
	printf("enter where to start:");
	scanf("%d",&a);
	
	printf("enter where to end  :");
	scanf("%d",&b);
	
	for(int i=a;i<=b;i++)
	{
		printf("%d\n",i);
	}
	return 0;

}
