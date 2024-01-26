#include <stdio.h>
#include <stdlib.h>
int main()
{
    int wid, height, tmp;
    scanf("%d", &wid);
    height = 2 * wid - 1;
    for (int i = 1; i <= height; i++)
    {
        if (i <= wid)
        {
            for (int j = 0; j < i; j++)
            {
                printf("*");
            }
        }
        else
        {
            for (int j = wid; j > i - wid; j--)
            {
                printf("*");
            }
        }
        printf("\n");
    }
}
