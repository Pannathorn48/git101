#include <stdio.h>
#include <stdlib.h>

int is_prime(int x)
{
    int n;
    if (x == 2)
    {
        return 1;
    }
    else
    {
        for (n = 2; n < x; n++)
        {
            if (x % n == 0)
            {
                return 0;
            }
                }
        return 1;
    }
}

int main()
{
    char input[5];
    fgets(input, 5, stdin);

    int i, n;

    n = atoi(input);

    for (i = 2; i <= n; i++)
    {
        if (is_prime(i))
        {
            printf("%d is a prime number.\n", i);
        }
    }

    return 0;
}
