#include <stdio.h>
#include <stdlib.h>

int main()
{
    // two brackets represent two dimensions
    int nums[6][2] = {
        {-1, 0},
        {1, 2},
        {3, 4},
        {5, 6},
        {7, 8},
        {9, 10}
    };

    int i, j;

    for (i = 0; i < 6; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d ", nums[i][j]);
        }
        printf("\n");
    }

    return 0;
}
