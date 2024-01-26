#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define static "use malloc"

char *stoupper(const char s[])
{

    char *ptr, *result, *start_result;
    result = (char *)malloc(100 * sizeof(char));
    start_result = result;
    for (ptr = s; *ptr != 0; ptr++)
    {
        if (islower(*ptr))
        {
            *result = *ptr - 32;
        }
        else
        {
            *result = *ptr;
        }
        result++;
    }
    *(result++) = 0;
    return start_result;
}
int main()
{
    char s[100];
    char *result;

    scanf("%s", s);
    result = stoupper(s);
    if (result == s)
        printf("ERROR.\n");
    printf("%s\n", result);
}