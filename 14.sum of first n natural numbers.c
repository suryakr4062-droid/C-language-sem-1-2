//sum of first n natural numbers
#include<stdio.h>
int main() 
{
    int i, n, sum;
    
    printf("enter the value n:");
    scanf("%d",&n);
    
    sum=0;
    for(i=0;i<=n;i++)
    {
        sum=sum+i;
    } 
    printf("sum of first n natural numbers is:%d",sum);
    
    return 0;
}