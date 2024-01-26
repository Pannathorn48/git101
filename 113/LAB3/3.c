#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x[10];
    char y[10];
    fgets(x, 11, stdin);
    fgets(y, 11, stdin);
    int a = atoi(x);
    int b = atoi(y);
    int i;
    for (i = 1; (i <= a) && (i <= b); i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            a = a / i;
            b = b / i;
            i = 1;
        }
    }
    if (b == 1)
    {
        printf("= %d", a);
    }
    else
    {
        printf("= %d/%d", a, b);
    }
}