#include <stdio.h>

int main()
{
    int n, i, j, space;

    scanf("%d", &n);  // Example: 3

    for(i = 1; i <= n; i++)   // loop for rows
    {
        // print leading spaces
        for(space = 1; space <= n - i; space++)
        {
            printf(" ");
        }

        // print stars and spaces in between
        for(j = 1; j <= i; j++)
        {
           printf("*");
           printf(" ");
        }
        for(space = 1; space <= n - i; space++)
        {
            printf(" ");
        }

        printf("\n");  // move to next line
    }

    return 0;
}

