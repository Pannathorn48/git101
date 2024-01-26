#include <stdio.h>
#include <stdlib.h>
void foo(int *p)
{
    // *p 
    *p = 100;
}
int main()
{
    // * &
    // float(4) *x = int(4) 
    int x = 5;   // 4
    int *p = &x; // 8
    foo(&x);
    printf("%d", x);
}