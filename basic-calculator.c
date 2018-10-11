#include <stdio.h>
#include <stdlib.h>

// basic calculator
int main()
{
    double num1;
    double num2;

    printf("Enter the first number: ");
    scanf("%lf", &num1);

    printf("Enter the second number: ");
    scanf("%lf", &num2);

    printf("Answer: %f\n", num1 + num2);

    return 0;
}
