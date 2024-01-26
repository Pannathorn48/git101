#include <stdio.h>
#include <stdlib.h>
double pi(int count)
{
    if (count % 2 == 0)
    {
        return -4.0 / (2 * count - 1);
    }
    else
    {
        return 4.0 / (2 * count - 1);
    }
}
int main()
{
    unsigned int n, i;
    printf("Enter n: ");
    scanf("%u", &n);
    double summ = 0;

    for (i = 1; i <= n; i++)
    {
        summ += pi(i);
    }
    printf("%.10lf", summ);
}
