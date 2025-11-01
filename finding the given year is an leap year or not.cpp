#include<stdio.h>
int main()
{
	int y;
	
	printf("enter the year to check:");
	scanf("%d",&y);
	
	if(((y%4==0)&&(y%100!=0))||(y%400==0))
	printf("IT IS A LEAP YEAR");
	
	else
	printf("IT IS NOT A LEAP YEAR");
	
	return 0;
}
