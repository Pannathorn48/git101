#include <stdio.h>
int main()
{
    int a = 4, b = 3, c, d, e;
    float f = 2, g = 5, h, i, j, k;

    c = f / b * f;
    printf("%d\n", c);
    h = a++ / (float)b;
    printf("%.2f\n", f);
    j = (float)c / h--;
    printf("%.2f\n", j);
    d = b * h / c;
    printf("%d\n", d);
    i = d * f + h--;
    printf("%.2f\n", i);
    e = a * d++ / i;
    printf("%d\n", e);
    k = (int)i * d / (float)a;
    printf("%.2f\n", k);
}