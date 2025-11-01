#include<stdio.h>
int main()
{
    int x, y, z;
    
    scanf("%d %d %d", &x, &y, &z);

    int max = -1; // to store greatest satisfying value

    for(int a = 1; a <= z; a++)
    {
        if(z >= a*x + y)  // same as (z == a*x + y || z > a*x + y)
        {
            max = a; // keep updating, last valid 'a' is greatest
        }
    }

    if(max != -1)
        printf("%d", max); // print only greatest valid value
    else
        printf("No value satisfies condition");

    return 0;
}

