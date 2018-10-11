#include <stdio.h>
#include <stdlib.h>

// void means that a function will not return any information
void sayHi(char name[], int age) {
    printf("Hello, %s.\n", name);
    printf("You are %d years old.\n", age);
}

int main()
{
    printf("Top\n");
    sayHi("Pat", 33);
    printf("Bottom\n");
    return 0;
}

