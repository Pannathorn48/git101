#include <stdio.h>
#include <stdlib.h>
void letter_print_top(int letter, int count)
{
    int r;
    for (r = 1; r <= letter - 1 * 2; r++)
    {
        printf("-");
    }
    printf("%c", 'a' - 1 + letter);
}
int main()
{
    letter_print_top(10, 1);
}
