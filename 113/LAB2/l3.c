#include <stdio.h>
#include <stdlib.h>

int main()
{
    char inp[20];
    fgets(inp, 21, stdin);
    float discount = atof(inp);
    float tax;
    if (discount >= 0 ){
    if (discount > 300000)
    {
        tax = 300000 * 0.05;
        discount -= 300000;
        tax += discount * 0.1;
    }
    else
    {
        tax = discount * 0.05;
    }
    printf("%.2f", tax);}
    else{
        printf("Error: Salary must be greater or equal to 0");
    }
}