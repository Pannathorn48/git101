#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, height, i;
    printf("Enter n: ");
    scanf("%d", &n);
    height = 2 * n - 1;
    for (i = 1; i <= height; i++)
    {
        if (i <= n)
        {
            for (int j = 1; j <= i; j++)
            {
                if (j % 2 == 1)
                {
                    printf("-");
                }
                else
                {
                    printf("x");
                }
            }
        }
        else
        {
            for (int j = n; j > i - n; j--)
            {
                if (n % 2 == 1)
                {
                    if (j % 2 == 1)
                    {
                        printf("-");
                    }
                    else
                    {
                        printf("x");
                    }
                }
                else
                {
                    if (j % 2 == 0)
                    {
                        printf("-");
                    }
                    else
                    {
                        printf("x");
                    }
                }
            }
        }
        printf("\n");
    }
}