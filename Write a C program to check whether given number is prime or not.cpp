//Write a C program to check whether given number is prime or not
#include<stdio.h>
int main ()
{
	int i,n,factor=0;
	
	printf("enter number you want to check:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			factor +=1;
		}
	}
	if(factor==2)
	{
		printf("prime");
	}
	else
	{
		printf("not a prime");
	}
	return 0;
}
