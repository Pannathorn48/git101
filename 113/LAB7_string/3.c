#include <stdio.h>
void stringcat(char src[], char dest[])
{
    char *dest_p, *src_p;

    for (dest_p = dest; *dest_p != 0; dest_p++)
        ;
    for (src_p = src; *src_p != 0; src_p++, dest_p++)
    {
        *dest_p = *src_p;
    }
    *dest_p = 0;
}

int main()
{
    char in1[100], in2[100];

    printf("Input 1: ");
    gets(in1); /* read a line of characters from the input to "in1" variable */
    printf("Input 2: ");
    gets(in2); /* read another line of characters from the input to "in2" variable */
    stringcat(in1, in2);
    printf(" Output: ");
    printf("%s\n", in2);
    return 0;
}