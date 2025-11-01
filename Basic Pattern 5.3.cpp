#include <stdio.h>
int main()
{
    int n, i, j, m;
    scanf("%d", &n);

    for(i = n; i >= 1; i--)
    {
        for(j = 1; j <= i; j++)
        {
            printf("%d", i);
        }
        for(m = 1; m <= (n - i); m++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}

