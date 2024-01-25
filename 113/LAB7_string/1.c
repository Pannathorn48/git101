#include <stdio.h>
int main()
{
    int vowels = 0, i;
    char inp[20], *inp_p, vowel_str[20] = "", *vowel_str_p;
    printf("String (without a space): ");
    scanf("%s", inp);
    inp_p = inp;
    vowel_str_p = vowel_str;
    while (*inp_p != 0)
    {
        switch (*inp_p)
        {
        case 'A':
            vowels++;
            *vowel_str_p = 'A';
            vowel_str_p++;
            break;
        case 'a':
            vowels++;
            *vowel_str_p = 'a';
            vowel_str_p++;
            break;
        case 'E':
            vowels++;
            *vowel_str_p = 'E';
            vowel_str_p++;
            break;
        case 'e':
            vowels++;
            *vowel_str_p = 'e';
            vowel_str_p++;
            break;
        case 'I':
            vowels++;
            *vowel_str_p = 'I';
            vowel_str_p++;
            break;
        case 'i':
            vowels++;
            *vowel_str_p = 'i';
            vowel_str_p++;
            break;
        case 'O':
            vowels++;
            *vowel_str_p = 'O';
            vowel_str_p++;
            break;
        case 'o':
            vowels++;
            *vowel_str_p = 'o';
            vowel_str_p++;
            break;
        case 'U':
            vowels++;
            *vowel_str_p = 'U';
            vowel_str_p++;
            break;
        case 'u':
            vowels++;
            *vowel_str_p = 'u';
            vowel_str_p++;
            break;
        default:
            break;
        }
        inp_p++;
    }
    for (i = 0; vowel_str[i] != 0; i++)
    {
        printf("%c ", vowel_str[i]);
    }
    if (vowels >= 2)
    {
        printf("\nThis string contains %d vowels.", vowels);
    }
    else
    {
        printf("\nThis string contains %d vowel.", vowels);
    }
}