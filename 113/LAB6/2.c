#include <stdio.h>
int main()
{
    char x;
    int s, sumweight = 0, weight, x_bar = 0, r = 1, i;
    printf("Enter number of subject(s): ");
    scanf("%d", &s);

    for (i = 0; i < s; i++)
    {
        printf("Enter credit,grade for subject #%d: ", r);
        scanf("%d,%c", &weight, &x);
        switch (x)
        {
        case 'a':
        case 'A':
            x_bar += 4 * weight;
            break;
        case 'b':
        case 'B':
            x_bar += 3 * weight;
            break;
        case 'c':
        case 'C':
            x_bar += 2 * weight;
            break;
        case 'd':
        case 'D':
            x_bar += 1 * weight;
            break;
        default:
            break;
        }
        sumweight += weight;

        r++;
    }
    float wx = (float)x_bar / sumweight;
    printf("GPA = %.2f", wx);
}