#include <stdio.h>
#include <stdlib.h>
long long gcd(long long maxx, long long minn)
{
    if (maxx % minn > 0)
    {
        gcd(minn, maxx % minn);
    }
    else
    {
        return minn;
    }
}
long long lcm(long long a, long long b, long long gcdr)
{
    long long lcm_r = a * (b / gcdr);
    return lcm_r;
}

int main()
{
    char inp1_str[20];
    char inp2_str[20];
    fgets(inp1_str, 12, stdin);
    fgets(inp2_str, 12, stdin);
    long long inp1 = atoll(inp1_str);
    long long inp2 = atoll(inp2_str);
    long long gcd_result;
    if (inp1 >= inp2)
    {
        gcd_result = gcd(inp1, inp2);
    }
    else
    {
        gcd_result = gcd(inp2, inp1);
    }
    long long lcm_result = lcm(inp1, inp2, gcd_result);
    printf("GCD: %lld\n", gcd_result);
    printf("LCM: %lld", lcm_result);
}
