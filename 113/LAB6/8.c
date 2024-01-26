#include <stdio.h>

void removeKilled(int *array, int size, int killedPrisoner);

int main()
{
    int numPrisoners, m, i;

    scanf("%d", &numPrisoners);
    scanf("%d", &m);

    int prisoners[numPrisoners];
    int killed[numPrisoners];

    // generate array 1 to numPrisoners
    for (i = 0; i < numPrisoners; i++)
    {
        prisoners[i] = i + 1;
    }

    int *killerPtr = &prisoners[0];

    // printf("@@ &prisoners[0] %d\n", (int) &prisoners[0]);
    // printf("@@ &prisoners[%d] %d\n", numPrisoners - 1, (int) &prisoners[numPrisoners - 1]);

    // Select prisoner to be killed
    for (i = 0; i < numPrisoners; i++)
    {
        int j, z;
        for (j = 0; j < m; j++)
        {

            killerPtr++;
            while (*killerPtr == 0)
            {
                if (killerPtr > &prisoners[numPrisoners - 1])
                {
                    for (z = 0; z < numPrisoners; z++)
                    {
                        if (prisoners[z] != 0)
                        {
                            killerPtr = &prisoners[z];
                            break;
                        }
                    }
                }
                killerPtr++;
            }
            if (killerPtr > &prisoners[numPrisoners - 1])
            {
                for (z = 0; z < numPrisoners; z++)
                {
                    if (prisoners[z] != 0)
                    {
                        killerPtr = &prisoners[z];
                        break;
                    }
                }
            }
        }
        if (i == 0)
        {
            killerPtr--;
        }

        // append number of prisoner who is killed to array `killed`
        killed[i] = *killerPtr;
        // remove number killed prisoner from array `prisoners`
        removeKilled(&prisoners[0], numPrisoners, *killerPtr);
    }

    for (i = 0; i < numPrisoners; i++)
    {
        printf("%d ", killed[i]);
    }
    return 0;
}

void removeKilled(int *array, int size, int killedPrisoner)
{
    int i;
    for (i = 0; i < size; i++)
    {
        if (array[i] == killedPrisoner)
        {
            array[i] = 0;
            break;
        }
    }
}
