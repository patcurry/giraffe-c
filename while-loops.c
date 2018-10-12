#include <stdio.h>
#include <stdlib.h>

int main()
{

    int index = 1;
    while (index <= 5) {
        printf("while %d\n", index);
        index++;
    }

    // example of do while
    int j = 6;
    do {
        printf("do %d\n", j);
        j++;
    } while (j <= 5);


    return 0;
}
