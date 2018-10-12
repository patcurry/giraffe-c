#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// struct is a data structure that we can use to store many data types
// we can model things with them
// we will use a struct to represent a student here

// lots of times we use a capital letter to start the struct
struct Student {
    char name[50];
    char major[50];
    int age;
    double gpa;
};

void printStudent(struct Student stu);

int main()
{

    struct Student student1; // we created a container called "student1" that we can use to store
                             // name, major, age and gpa

    // I could put this in a function
    // assign values to student1
    student1.age = 22;
    student1.gpa = 3.2;

    // arrays are a bit more difficult to write to
    // we need to use a special function
    strcpy(student1.name, "Jim"); // string copy
    strcpy(student1.major, "Business"); // string copy

    printStudent(student1);

    struct Student student2;

    // I could put this in a function
    // assign values to student1
    student2.age = 21;
    student2.gpa = 3.4;

    // arrays are a bit more difficult to write to
    // we need to use a special function
    strcpy(student2.name, "Jane"); // string copy
    strcpy(student2.major, "Biology"); // string copy

    printStudent(student2);

    return 0;
}

void printStudent(struct Student stu) {
    // could I put this in a function
    printf("Name: %s\n", stu.name);
    printf("Major: %s\n", stu.major);
    printf("Age: %d\n", stu.age);
    printf("GPA: %f\n", stu.gpa);
    printf("\n");
}
