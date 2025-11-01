// Electricity bill calculation
#include<stdio.h>
int main()
{
    float units, amount, charge, total_charges;
    
    printf("Enter the units: ");
    scanf("%f", &units);
    
    if(units <= 50)
    {
        amount = units * 2.50;
        charge = 25;
    }
    else if(units <= 100)
    {
        amount = units * 3.00;
        charge = 50;
    }
    else if(units <= 200)
    {
        amount = units * 3.50;
        charge = 75;
    }
    else if(units <= 300)
    {
        amount = units * 4.00;
        charge = 100;
    }
    else
    {
        amount = units * 4.50;
        charge = 125;
    }
    
    total_charges = amount + charge;
    printf("Total charges = %.2f\n", total_charges);
    
    return 0;
}
