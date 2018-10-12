#include <stdio.h>
#include <stdlib.h>

// think of a pointer as a type of data in the program
// it's just a memory address

int main()
{
    int age = 30;
    int *pAge = &age; // this pointer variable is storing the memory address of the above age variable

    double gpa = 3.5;
    double *pGpa = &gpa;
    
    char grade = 'A';
    char *pGrade = &grade;

    printf("age's memory address: %p\n", pAge);
    printf("gpa's memory address: %p\n", pGpa);
    printf("grade's memory address: %p\n", pGrade);

    return 0;
}
