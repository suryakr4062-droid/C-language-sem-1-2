#include<stdio.h>

int main()

{

int a, b, C;

printf("Enter value of a:");

scanf("%d", &a);

printf("Enter value of b:");

scanf("%d", &b);

C = a;

a = b;

b = C;

printf("Values of a & b after swapping: ");

printf("a = %d\n", a);

printf("b = %d", b);

return 0;

}