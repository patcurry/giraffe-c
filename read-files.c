#include <stdio.h>
#include <stdlib.h>

int main()
{
    char line[255];
    FILE * fpointer = fopen("./employees.txt", "r"); // fopen(filename, file mode)

    // read file one line at a time
    // second parameter is size
    fgets(line, 255, fpointer); // this moves the pointer around - this reads the first line in the file
    printf("%s", line);

    fgets(line, 255, fpointer); // this will print the second line in the file
    printf("%s", line);


    fclose(fpointer);
    return 0;
}
