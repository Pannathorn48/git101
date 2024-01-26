#include <stdio.h>
#include <stdlib.h>
int main()
{
    unsigned long long int inp, result, hold1, hold2;
    int c = 1;
    printf("Input n = ");
    scanf("%llu", &inp);
    result = inp * inp;
    printf("n^2 = %llu\n", result);
    hold1 = inp;
    hold2 = result;
    while (hold1 >= 1)
    {
        if (hold2 % 10 != hold1 % 10)
        {
            c = 0;
            break;
        }
        hold1 /= 10;
        hold2 /= 10;
    }

    if (c)
    {
        printf("Yes. %llu is automorphic number.", inp);
    }
    else
    {
        printf("No. %llu is not automorphic number.", inp);
    }
}
