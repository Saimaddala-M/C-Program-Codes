#include <stdio.h>

int main() {
    int A[3][3];
    int i, j;

    printf("Enter elements of 3x3 matrix:\n")
    
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Diagonal elements are:\n");

    for (i = 0; i < 3; i++) {
        printf("%d ", A[i][i]);
    }

    return 0;
}
 