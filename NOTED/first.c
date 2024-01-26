#include <stdio.h>
#include <unistd.h>
#define START 5
#define STOP 15
#define SKIP_START 7
#define SKIP_STOP 9
int main()
{
    // int around -2billion to + 2 billions

    for (int x = START; x < STOP; x++)
    {
        if (x >= SKIP_START && x <= SKIP_STOP)
        {
            continue;
        }
        else
        {
            printf("x = %d\n", x);
        }
        sleep(1);
    }
}