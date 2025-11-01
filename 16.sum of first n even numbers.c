//sum of first n even numbers
int main() 
{
    int i, n, sum;
    
    printf("enter value n:");
    scanf("%d",&n);
    
    sum=0;
    for(i=0;i<=2*n;i+=2) 
    {
        sum=sum+i;
    }
    printf("the sum of first n even numbers is:%d",sum);
    
    return 0;
}