#include <stdio.h>
#include <stdlib.h>

int main()
{
    //int luckyNumbers[] = {4, 8, 15, 16, 23, 42};
    //printf("%d\n", luckyNumbers[2]); // the number in the closed brackets is the index of the element

    // we can modify numbers in the array
    //luckyNumbers[1] = 200;
    //printf("luckyNumbers[1] has been changed from 8 to %d\n", luckyNumbers[1]);
    
    int luckyNumbers[10]; // if we don't know what will go in the array we need to put a capacity for the array
                          // luckyNumbers has the capacity to have 10 elements
    luckyNumbers[1] = 80;
    printf("%d", luckyNumbers[3]); // if there is an unset element this seems to return 0

    return 0;
}
