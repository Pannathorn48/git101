#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define M_PI 3.14

int main()
{
    int fixedcost = 5, basecost = 2;
    float extracost;
    printf("Welcome to My Pizza Shop!!\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("Enter pizza size (1=s, 2=m, or 3=l): ");
    char size[5];
    fgets(size, 6, stdin);
    int s = atoi(size);
    int d;
    if (s == 1)
    {
        d = 10;
    }
    else if (s == 2)
    {
        d = 16;
    }
    else
    {
        d = 20;
    }
    printf("Extra pepperoni? (1=yes, 0=no): ");
    char pep[5];
    fgets(pep, 6, stdin);
    int p = atoi(pep);
    if (p == 1)
    {
        extracost += 0.5;
    }
    printf("Extra cheese? (1=yes, 0=no): ");
    char cheese[5];
    fgets(cheese, 6, stdin);
    int ch = atoi(cheese);
    if (ch == 1)
    {
        extracost += 0.25;
    }
    printf("Extra mushroom? (1=yes, 0=no): ");
    char mus[5];
    fgets(mus, 6, stdin);
    int m = atoi(mus);
    if (m == 1)
    {
        extracost += 0.3;
    }

    float price;
    float area = M_PI * d * d / 4.0;
    float cost = fixedcost + (basecost * area) + (extracost * area);
    price = cost * 1.5;
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("Your order costs %.2f baht.\n", price);
    printf("Thank you.\n");
}