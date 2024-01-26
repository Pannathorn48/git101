#include <stdio.h>
#include <stdlib.h>
void line(int wid, int c)
{
    if (c > wid)
    {
        int tmp = c - wid;
        c = wid - tmp;
    }
    int i, times = 2 * c - 1, space = wid - c, plus = 1;
    char start;
    for (int i = 0; i < space; i++)
    {
        printf("--");
    }

    for (i = 1; i <= times; i++)
    {
        if (i <= c)
        {
            start = 'a' + wid - i;
            if (i < c)
            {
                printf("%c-", start);
            }
            else
            {
                printf("%c", start);
            }
        }
        else
        {
            printf("-%c", start + plus++);
        }
    }
    for (int i = 0; i < space; i++)
    {
        printf("--");
    }

    printf("\n");
}
int main()
{
    int n, c;
    char str[5];
    fgets(str, 6, stdin);
    n = atoi(str);
    if (n > 0 && n <= 26)
    {
        for (c = 1; c <= n * 2 - 1; c++)
        {
            line(n, c);
        }
    }
    else
    {
        printf("-");
    }
}