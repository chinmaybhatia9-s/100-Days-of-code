#include <stdio.h>

int main() {
    int r1, c1, r2, c2;
    scanf("%d %d", &r1, &c1);
    scanf("%d %d", &r2, &c2);

    if (c1 != r2) {
        printf("Multiplication not possible\n");
        return 0;
    }

    int a[r1][c1], b[r2][c2], res[r1][c2];

    // Input matrix A
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c1; j++)
            scanf("%d", &a[i][j]);

    // Input matrix B
    for (int i = 0; i < r2; i++)
        for (int j = 0; j < c2; j++)
            scanf("%d", &b[i][j]);

    // Initialize result matrix
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c2; j++)
            res[i][j] = 0;

    // Matrix multiplication
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            for (int k = 0; k < c1; k++) {
                res[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // Print result matrix
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++)
            printf("%d ", res[i][j]);
        printf("\n");
    }

    return 0;
}