#include <stdio.h>
#include <stdlib.h>

// prototyping
double cube(double num);

int main()
{
    double num;
    printf("What would you like to cube? ");
    scanf("%lf", &num);
    printf("%f\n", cube(num));
    return 0;
}

double cube(double num) {
    //int res = num * num * num;
    //return res;
    return num * num * num;
}
