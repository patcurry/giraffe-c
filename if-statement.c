#include <stdio.h>
#include <stdlib.h>

// this should return a string
int max(int num1, int num2, int num3) {
    // check which number is the biggest
    int result;

    if (num1 >= num2 && num1 >= num3) {
        result = num1;
    } else if (num2 >= num3) {
        result = num2;
    } else {
        result = num3;
    }

    return result;
}

int main() 
{
    int num1;
    int num2;
    int num3;

    printf("Which is a bigger number? Number 1 or Number 2 or Number 3?\n");

    printf("Please, enter a value for Number 1: \n");
    scanf("%d", &num1);

    printf("Please, enter a value for Number 2: \n");
    scanf("%d", &num2);

    printf("Please, enter a value for Number 3: \n");
    scanf("%d", &num3);

    printf("The larger number is %d.\n", max(num1, num2, num3));

    return 0;
}
