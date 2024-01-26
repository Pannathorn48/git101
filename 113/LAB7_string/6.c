#include <stdio.h>

int charcount(char *s)
{
    int count = 0;
    char *ptr;
    for (ptr = s; *ptr != 0; ptr++)
        count++;
    return count;
}

void charweave(char *s, char *result)
{

    int size = charcount(s), i;
    char *start_ptr = s;
    char *end_ptr = &s[size - 1];
    for (i = 0; i < size; i++)
    {
        *result = *start_ptr;
        result++;
        start_ptr++;
        *result = *end_ptr;
        result++;
        end_ptr--;
    }
    *result = 0;
}

int main()
{
    char str[100], result[200];

    printf("String: ");
    gets(str); /* read a line of characters from the input to "str" variable */
    charweave(str, result);
    printf("Output: %s\n", result);
    return 0;
}