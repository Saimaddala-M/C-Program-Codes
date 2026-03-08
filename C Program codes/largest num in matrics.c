#include <stdio.h>

int main() {
    int A[3][3];
    int i, j, max;

    printf("Enter elements of 3x3 matrix:\n");

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    max = A[0][0];
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (A[i][j] > max) {
                max = A[i][j];
            }
        }
    }

    printf("Largest number in the matrix = %d\n", max);

    return 0;
}
