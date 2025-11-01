// area and perimeter of a square
#include <stdio.h>
int main()
{
        int L,A,P;
        
        printf("enter side length:");
        scanf("%d",&L);
        
        A=L*L;
        printf("area of the square is:%d"\n",A);
        
        P=4*L;
        printf("perimeter of the square is:%d",P);
		
        return 0;
}
