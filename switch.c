#include <stdio.h>
#include <stdlib.h>

int main() {

    char grade;

    printf("What grade did you receive? Enter A, B, C, D or F.\n");
    scanf("%c", &grade);

    switch(grade){
        case 'A':
            printf("You did great!\n");
            break;
        case 'B':
            printf("You did alright.\n");
            break;
        case 'C':
            printf("C stands for \"Crap\"!\n");
            break;
        case 'D':
            printf("Basically the lowest grade without failing.\n");
            break;
        case 'F':
            printf("Fail.\n");
            break;
        default:
            printf("Invalid grade.\n");
    }

    return 0;
}
