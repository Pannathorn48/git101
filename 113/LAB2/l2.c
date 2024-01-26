#include <stdio.h>
#include <stdlib.h>
int main()
{
    char stamp_str[10], discount_str[10];
    fgets(stamp_str, 11, stdin);
    fgets(discount_str, 11, stdin);
    int stamp = atoi(stamp_str);
    float discount = atof(discount_str);
    int percent;
    if (stamp >= 9)
    {
        percent = 40;
        stamp -= 9;
    }
    else if (stamp >= 6)
    {
        percent = 30;
        stamp -= 6;
    }
    else if (stamp >= 3)
    {
        percent = 20;
        stamp -= 3;
    }
    else if (stamp >= 2)
    {
        percent = 15;
        stamp -= 2;
    }
    else if (stamp >= 1)
    {
        percent = 10;
        stamp -= 1;
    }
    else
    {
        percent = 0;
    }
    printf("You get %d percents discount.\n", percent);
    printf("Total amount due is %.2f Baht.\n", discount * (1 - (percent / 100.0)));
    printf("And you have %d stickers left.", stamp);
    return 0;
}