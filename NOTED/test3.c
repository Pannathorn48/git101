#include <stdio.h>
int pfunc()
{
    printf("hello");
}
int (*func)();
int main()
{
    // adress
    // *(A + i) == A[i]
    // A[i] A+i

    // NOTED  &*p = > p    &*&*&*p = > p ===> p ===>  &p ===> **p ==> p = [[1,2],[3,4]] *p = &[1,2] ==> 2000 != **p = &1 p[0][0] ==> 2001
    //  &&**p

    // const int ==> read only

    // a = "Hello" ==> 0 1 2 3 4 .. n

    func = &pfunc;
    func();
}