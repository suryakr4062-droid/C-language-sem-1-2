//write the c program to find the sum of individual numbers
#include<stdio.h>
int main()
{
	int sum=0,a,n;
	
	printf("enter the number:");
	scanf("%d",&n);
	
	while(n!=0)
	{
		a=n % 10;
		sum=sum+a;
		n=n / 10;
	}
	printf("sum of digits is:%d",sum);
	return 0;
}
