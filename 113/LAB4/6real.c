#include <stdio.h>
#include <stdlib.h>
int main()
{
    float goal = 0, temp = 0, inp;
    int day = 0;
    printf("Enter your goal amount: ");
    scanf("%f", &goal);
    while (temp < goal)
    {
        day++;
        printf("Enter money collected today: ");
        scanf("%f", &inp);
        temp += inp;
        if (temp >= goal)
            break;
        printf("Total money collected up to day %d is %.2f. You need %.2f more.\n", day, temp, goal - temp);
    }
    if (day > 1)
    {

        printf("Congratulations! You take %d days to reach your goal.", day);
    }
    else
    {
        printf("Congratulations! You take %d day to reach your goal.", day);
    }
}