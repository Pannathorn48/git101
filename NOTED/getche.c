#include <stdio.h>
// beware data can be stuck inn buffer
// we have to flush it
int main()
{
    int ch;
    printf("input :");
    fflush(stdout); // ***flush data that stuck in buffer
    // os has to manage what in buffer
    // data will deploy in buffer
    // and hw will look for buffer
    // so we have to use fflush
    // OS has to manage everything
    // if we want to write something on disk
    // we have to fflush everything on buffer to hw first
    ch = getchar();
    printf("\nchar is %c", ch);
}