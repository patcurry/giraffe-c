#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age = 30;
    int *pAge = &age;

    printf("pointer: %p\n", pAge);
    printf("dereferenced pointer: %d\n", *pAge); // using the asterisk dereferences the pointer

    printf("%d", *&*&age); // & gives us the memory address and * dereferences it

    return 0;
}
