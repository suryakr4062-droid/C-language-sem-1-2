//sum of first n odd numbers
# include<stdio.h>
int main() 
{
    int i, n, sum;
    
    printf("enter the value n:");
    scanf("%d",&n);
    
    sum=0;
    for(i=1; i<=2*n-1 ;i+=2) 
    {
        sum=sum+i;
    }
    printf("the sum of n odd numbers is:%d",sum);
    
    return 0;   
}