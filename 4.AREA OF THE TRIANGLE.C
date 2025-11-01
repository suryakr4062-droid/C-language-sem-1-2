//AREA OF THE TRIANGLE
#include <stdio.h>
#include<math.h>

	int main()
	{
	float a,b,c,A,S;
	
	printf("enter side a:");
	scanf("%f",&a);
	
	printf("enter side b:");
	scanf("%f",&b);
	
	printf("enter side c:");
	scanf("%f",&c);
	
	S=(a+b+c)/2;
	A=sqrt(S*(S-a)*(S-b)*(S-c));
	
	printf("area of the square is:%f",A);
	
	return 0;
}