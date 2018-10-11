#include <stdio.h>
#include <stdlib.h>

int main()
{
    // declare variable to store age of user inputs, but don't give it a value
    //int age;
    //printf("Enter your age: ");
    //scanf("%d", &age); // scanf allows user to enter information into the program
                       // the ampersand sets this up as a "pointer"
   // printf("Your age is %d\n", age);

    //double gpa;
    //printf("Enter your gpa: ");
    //scanf("%lf", &gpa);
    //printf("Your gpa is %f\n", gpa);

    //char grade;
    //printf("Enter your grade: ");
    //scanf("%c", &grade);
    //printf("Your grade is %c\n", grade);

    // string
    //char name[20]; // why give this a number limit? c needs to know how much memory to allocate
    //printf("Enter your name: ");
    //scanf("%s", name); // does not handle spaces!
    //printf("Your name is %s\n", name);

    // string with spaces
    char name[20]; // why give this a number limit? c needs to know how much memory to allocate
    printf("Enter your name: ");
    fgets(name, 20, stdin); // grabs whole line of text. 
                            // Start with variable, then give number of characters
                            // stdin is standard input
                            // fgets also puts a new line character after the variable
    printf("Your name is %s, great!", name);

    return 0;
}
