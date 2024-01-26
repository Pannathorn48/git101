#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n, a, b, c, check = 0;
    scanf("%d", &n);
    for (a = 1; a < n; a++)
    {
        if (check)
            break;
        for (b = n; b > 0; b--)
        {
            if (check)
                break;
            c = sqrt((a * a) + (b * b));

            if ((a + b + c == n) && (a * a + b * b == c * c))
            {
                check = 1;
                printf("(%d, %d, %d)", a, b, c);
            }
        }
    }
    if (!check)
    {
        printf("No triple found.");
    }
}