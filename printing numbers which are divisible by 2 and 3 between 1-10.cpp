#include <stdio.h>
int main()
{
    int i,a,b;
    
    printf("enter the starting range:");
    scanf("%d",&a);
    
    printf("enter the ending range  :");
    scanf("%d",&b);
    
    for (i = a; i <= b; i++)
	{
        if ((i % 2 == 0 ) || (i % 3 == 0))
		{
            printf("numbers which are divisible by  2 or 3:");
            printf("%d\n",i);
        }
        
        if ((i % 2 == 0 ) && (i % 3 == 0))
		{
            printf("numbers which are commonly divisible by both 2&3:");
            printf("%d\n",i);
        }
    }
    return 0;
}

