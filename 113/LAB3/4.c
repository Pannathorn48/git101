#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int fibo(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1 || n == 2)
    {
        return 1;
    }
    else
    {
        return fibo(n - 1) + fibo(n - 2);
    }
}
int main()
{
    char inp[10];
    int n;
    fgets(inp, 11, stdin);
    n = atoi(inp);
    for (int i = 0; i <= n; i++)
    {
        printf("F(%d) = %d\n", i, fibo(i));
    }
}