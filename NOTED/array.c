#include <stdio.h>
int main()
{
    int arr_x[20];
     // arr_x has 20 n of int and int use 32 bit and it go 4 bytes so it has to use 80 bytes
    // it has to book 80 bytes ni memory

    char charactors[10];
    int i;

    charactors[0] = 'A';
    // constant charactor in ascii table we use single code
    charactors[1] = 'B';
    charactors[2] = 'C';
    charactors[3] = 'D';
    for (i = 0; i < 4; i++)
    {
        printf("Char = %d in arr is %c\n", i, charactors[i]);
    }
}