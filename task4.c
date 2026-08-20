#include <stdio.h>

void main()
{
    int n = 15;
    for (int i = 1; i <= n; i++)
    {
        // star :
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }

        // space :
        for (int j = 1; j <= (2 * n - 2 * i); j++)
        {
            printf("  ");
        }

        // star :
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
     for (int i = n; i >= 1; i--)
    {
        // star :
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }

        // space :
        for (int j = 1; j <= (2 * n - 2 * i); j++)
        {
            printf("  ");
        }

        // star :
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}