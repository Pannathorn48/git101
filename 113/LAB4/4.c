#include <stdio.h>
#include <stdlib.h>
void line(int w)
{
    int i;
    for (i = 0; i < w; i++)
    {
        printf("*");
    }
    printf("\n");
}
void between(int w)
{
    int i;
    for (i = 0; i < w; i++)
    {
        if (i == 0 || i == w - 1)
        {
            printf("*");
        }
        else
        {
            printf(" ");
        }
    }
    printf("\n");
}
int main()
{
    char inp1[10], inp2[10];
    int w, h, i;
    fgets(inp1, 11, stdin);
    fgets(inp2, 11, stdin);
    w = atoi(inp1);
    h = atoi(inp2);
    for (i = 0; i < h; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf(" ");
        }
        if (i == 0 || i == h - 1)
        {
            line(w);
        }
        else
        {
            between(w);
        }
    }
}