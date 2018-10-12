#include <stdio.h>
#include <stdlib.h>

int main()
{
    // write
    //FILE * fpointer = fopen("./employees.txt", "w"); // fopen(filename, file mode)
    // special c function that writes stuff to the file
    //fprintf(fpointer, "Jim, Salesman\nPam, Receptionist\nOscar, whatever\n");

    // append
    FILE * fpointer = fopen("./employees.txt", "a"); // fopen(filename, file mode)
    fprintf(fpointer, "Pat, Boss\n");

    fclose(fpointer);
    return 0;
}
