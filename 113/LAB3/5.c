#include <stdio.h>
#include <stdlib.h>
int main()
{
    char inp[10], c;
    int n, i, j;
    fgets(inp, 11, stdin);
    n = atoi(inp);
    if (n > 26 || n <= 0)
    {
        printf("-");
    }
    else
    {
        for (i = 0; i < n - 1; i++)
        {
            printf("%c-", n + 'a' - 1 - i);
        }
        printf("a");
        for (j = 0; j < i; j++)
        {
            printf("-%c", 'a' + j + 1);
        }
    }
}
