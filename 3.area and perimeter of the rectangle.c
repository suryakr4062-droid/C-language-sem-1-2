#include<stdio.h>

int main()
{
    int i, j, k, l;
    printf("ENTER THE VALUE OF a:") ;
    scanf("%d", &i) ;
    printf("ENTER THE VALUE OF b:") ;
    scanf("%d", &j) ;
    k=2*(i+j) ;
    printf("preimeter of the rectangle is:%d\n", k) ;
    l=i*j;
    printf("area of the rectangle is:%d", l) ;
    return 0;
}