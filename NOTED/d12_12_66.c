#include <stdio.h>
int main(){
    //NOTED : gcc file.c std=c89 -pendantic-errors
    int x;
    x = 5;
    // left value has to be operand 
    // printf("x = %d",x = 2);
    // we can assigned value in print format  when assigend value it will always return that value 
    
    int i;
    for(i=1;i<=12;i++){
        printf("2 x %d = %d\n",i,i*2);
    }
    return 0;
}