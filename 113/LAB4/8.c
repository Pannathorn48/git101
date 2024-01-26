#include <stdio.h>
#include <stdlib.h>
unsigned long long binary(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return (n & 1) + (10 * binary(n >>= 1));
    }
}
int main()
{
    int inp;
    scanf("%d", &inp);
    printf("%lld", binary(inp));
}