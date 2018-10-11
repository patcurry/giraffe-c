#include <stdio.h>
#include <stdlib.h>

int main()
{
    //int num = 5;
    const int num = 5; // uppercase names are a nice way to denote a constant
    printf("%d\n", num);

    //num = 8; // Error here. Cannot modify a constant.
    //printf("%d\n", num);
    
    printf("Hello\n"); //this is considered a constant as well
    printf("%d\n", 70); //this is considered a constant as well

    return 0;
}
