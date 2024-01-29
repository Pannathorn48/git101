#include <stdio.h>
void roman2arabic(char input[], char output[])
{
    char *input_ptr, *output_ptr;
    int tmp = 0;
    output_ptr = output;
    for (input_ptr = input; *input_ptr != 0; input_ptr++)
    {
        if (*input_ptr == 'I')
        {
            tmp++;
            continue;
        }
        else if (*input_ptr == 'V')
        {
            if (*(input_ptr - 1) == 'I')
            {
                if (tmp > 1)
                {
                    *output_ptr = tmp - 1 + '0';
                    output_ptr++;
                }

                tmp = 4;
                continue;
            }
            else
            {
                tmp += 5;
                continue;
            }
        }
        else if (*input_ptr == 'X')
        {
            if (tmp > 1)
            {
                *output_ptr = tmp - 1 + '0';
                output_ptr++;
            }
            tmp = 9;
            continue;
        }
        else if (tmp)
        {
            *output_ptr = tmp + '0';
            output_ptr++;
            *output_ptr = *input_ptr;

            tmp = 0;
        }
        else
        {
            *output_ptr = *input_ptr;
            tmp = 0;
        }
        output_ptr++;
    }
    if (tmp != 0)
    {
        *output_ptr = tmp + '0';
        output_ptr++;
        *output_ptr = 0;
    }
    else
    {
        *output_ptr = 0;
    }
}

int main()
{
    char input[80], output[80];

    printf(" Input: ");
    gets(input); /* read a line of characters from the input to "input" variable */

    roman2arabic(input, output);
    printf("Output: %s\n", output);

    return 0;
}