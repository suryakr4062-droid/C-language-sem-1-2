#include<stdio.h>
int main()
{
	char op;
	double first,second;
	
	printf("enter operator(+,-,/,*):");
	scanf("%c",&op);
	
	printf("enter first operands:");
	scanf("%lf",&first);
	
	printf("enter second operands:");
	scanf("%lf",&second);
	
	switch(op)
	{
		case'+':
		printf("%.1lf+%.1lf=%.1lf",first,second,first+second);
		break;
		
		case'-':
		printf("%.1lf-%.1lf=%.1lf",first,second,first-second);
		break;
		
		case'/':
		printf("%.1lf/%.1lf=%.1lf",first,second,first/second);
		break;
		
		case'*':
		printf("%.1lf*%.1lf=%.1lf",first,second,first*second);
		break;
		
		default:
		printf("error! operator is invalid");
	}
	return 0;
}
