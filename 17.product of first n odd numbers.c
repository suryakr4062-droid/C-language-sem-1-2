//product of first n odd numbers
#include<stdio.h>
int main() 
{
    int i, n, p;
    
    printf("enter the value n:");
    scanf("%d",&n);
    
    p=1;
    
    for(i=1 ;i<=n ;i++)
    {
        p=p*i;
    }
    printf("the product of first n numbers is:%d",p);
    
    return 0;
}