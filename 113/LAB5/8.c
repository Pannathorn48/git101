#include <stdio.h>
char stair[] = "|---|\n";
char head[] = "|-O-|\n";
char foot[] = "|-^-|\n";
void ladder(int ad, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (i == ad)
        {
            printf("%s", head);
        }
        else if (i == ad + 1)
        {
            printf("%s", foot);
        }
        else
        {
            printf("%s", stair);
        }
    }
}
int move(int ad, int step, int n)
{
    int i;
    if (step > 0)
    {
        if (step >= n || ad - step < 0)
        {
            ad = 0;
        }
        else
        {
            ad -= step;
        }
    }
    else if (step < 0)
    {
        ad -= step;
        if (ad + 1 >= n)
        {
            ad = n - 2;
        }
    }
    ladder(ad, n);

    return ad;
}
int main()
{
    int r = 1, step, n, ad, i;
    printf("Input number of stairs: ");
    scanf("%d", &n);
    ad = n - 2;
    step = 0;
    while (1)
    {
        if (r > 1)
        {
            printf("Input step command: ");
            scanf("%d", &step);
            if (step == 0)
                break;
        }
        printf("---- round %d ----\n", r);
        if (r == 1)
        {
            ladder(ad, n);
        }
        else
        {
            ad = move(ad, step, n);
        }
        r++;
    }
}