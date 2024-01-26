#include <stdio.h>
#include <stdlib.h>
int main()
{

    float init, value;
    char op, initstr[10];
    int run = 1;
    printf("Initial Value: ");
    fgets(initstr, 11, stdin);
    init = atof(initstr);
    printf("\n");
    while (run)
    {
        printf("Operator: ");
        scanf("\n%c", &op);
        switch (op)
        {
        case '+':
            printf("Input Value: ");
            scanf(" %f", &value);
            init += value;
            printf("Present Value is %.4f\n\n", init);
            break;
        case '-':
            printf("Input Value: ");
            scanf(" %f", &value);
            init -= value;
            printf("Present Value is %.4f\n\n", init);
            break;
        case '*':
            printf("Input Value: ");
            scanf(" %f", &value);
            init *= value;
            printf("Present Value is %.4f\n\n", init);
            break;
        case '/':
            printf("Input Value: ");
            scanf(" %f", &value);
            init /= value;
            printf("Present Value is %.4f\n\n", init);
            break;
        default:
            run = 0;
            break;
        }
    }
    printf("\nFinish Calculation. Final Value is %.4f", init);
}