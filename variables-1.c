#include <stdio.h>
#include <stdlib.h>

int main()
{
    char characterName[] = "Tom";
    int characterAge = 67;

    printf("There was a man named %s\n", characterName);
    printf("he was %d years old.\n", characterAge);

    // change age half way through
    // not good functional programming
    characterAge = 30;
    printf("He really liked the name %s,\n", characterName);
    printf("but he did not like being %d.\n", characterAge);

    return 0;
}
