#include <stdio.h>

// Define constants for the array dimensions
#define ROWS 3
#define COLS 3

int main() {
    int two_d_array[ROWS][COLS] = {
        {0, 0, 0},
        {0, 0, 0},
        {0, 0, 0}
    };
    //to disply the array
    printf("Generated %dx%d 2D Array (using initializer list):\n", ROWS, COLS);
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", two_d_array[i][j]);
        }
        printf("\n");
    }

    two_d_array[1][1] = 5;

    printf("\nArray after setting the center element (row 1, col 1) to 5:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", two_d_array[i][j]);
        }
        printf("\n");
    }

    return 0;
}   