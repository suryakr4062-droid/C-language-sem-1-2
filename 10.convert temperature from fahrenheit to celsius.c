//convert temperature from fahrenheit to celsius
#include <stdio.h>
int main()
{
    float f,c;
    
    printf("enter fahrenheit:");
    scanf("%f",&f);
    
    c=(f-32)*(5.0/9.0) ;
    
    printf("temperature in celsius:%3f", c) ;
    
    return 0;
    
}