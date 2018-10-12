#include <stdio.h>
#include <stdlib.h>

int main()
{
    double num1;
    double num2;
    char op; // operator

    printf("Enter a number: ");
    scanf("%lf", &num1);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op);

    printf("Enter another number: ");
    scanf("%lf", &num2);

    // figure out which operator we have
    // seems like this could be in a different function
    // would that be necessary?
    if (op == '+') {
        printf("%f\n", num1 + num2);
    } else if (op == '-') {
        printf("%f\n", num1 - num2);
    } else if (op == '*') {
        printf("%f\n", num1 * num2);
    } else if (op == '/') {
        printf("%f\n", num1 / num2);
    } else {
        printf("I did not understand the operator, please select +, -, * or /.\n");
    }

    return 0;
}
