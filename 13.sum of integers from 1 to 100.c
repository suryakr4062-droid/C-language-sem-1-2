//sum of integers from 1 to 100
#include<stdio.h>
int main() 
{
    int i, n, sum;
    
    printf("enter the value n:");
    scanf("%d",&n);
    
    sum=0;
    for(i=0;i<101;i++)
    {
        sum=sum+i;
    } 
    printf("sum of integers from 1 to 100 is:%d",sum);
    
    return 0;
}