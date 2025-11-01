
#include<stdio.h>
int main()
{
	int n,t,reminder,sum;
	
	printf("enter the number");
	scanf("%d",&n);
	
	t=n;
	while(n!=0)
	{
		reminder=n%10;
		sum=sum*10+reminder;
		n=n/10;
	}
	if(sum==t)
	{
	printf("%d is a palindrome",t);
	}
	
	else
	{
	printf("%d is not a palindrome",t);
	}

	return 0;
}
