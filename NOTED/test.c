#include <stdio.h>

int main()
{ 
 int input;
 int a,e,i,o,u,newline,other;
 while((input = getchar()) != '\n'){
    switch (input) {
        case 'a':
        case 'A': a++;break;
        case 'e':
        case 'E': e++;break;
        case 'i':
        case 'I': i++;break;
        case 'o':
        case 'O': o++;break;
        case 'u':
        case 'U': u++;break;
        case '\n' : newline++; break;
        default : other++;
    }
 }
 printf("%02d, %02d, %02d, %02d, %02d,%02d,%02d",a,e,i,o,u,newline,other);
}