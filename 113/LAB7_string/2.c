#include <stdio.h>

int remove_vowel(char str[])
{
    char *str_p, *tmp;
    str_p = str;
    for (; *str_p != 0; str_p++)
    {
        switch (*str_p)
        {
        case 'A':
        case 'a':
        case 'E':
        case 'e':
        case 'I':
        case 'i':
        case 'O':
        case 'o':
        case 'U':
        case 'u':
            tmp = str_p;
            while (*tmp != 0)
            {
                *tmp = *(tmp + 1);
                tmp++;
            }
            str_p--;
            break;
        default:
            break;
        }
    }
}

int main()
{
    char str[80];

    printf(" Input: ");
    gets(str);

    remove_vowel(str);
    printf("Output: %s\n", str);

    return 0;
}
