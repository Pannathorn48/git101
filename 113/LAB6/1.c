#include <stdio.h>
int main()
{
    int hour, minute;
    char m[3];
    printf("Enter a 12-hour time [eg. 12:34 am]: ");
    scanf("%2d:%2d %2s", &hour, &minute, m);
    if (m[0] == 'A' || m[0] == 'a')
    {
        if (hour == 12)
        {
            hour = 0;
        }
        printf("Equivalent 24-hour time: %02d:%02d", hour, minute);
    }
    else
    {
        if (hour < 12)
            hour += 12;

        printf("Equivalent 24-hour time: %02d:%02d", hour, minute);
    }
}