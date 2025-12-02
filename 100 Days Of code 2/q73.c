#include <stdio.h>
int main() {
    int r, c;
    scanf("%d %d", &r, &c);
    int mat[r][c], rowSum[r];
    for (int i = 0; i < r; i++) {
        rowSum[i] = 0;
        for (int j = 0; j < c; j++) {
            scanf("%d", &mat[i][j]);
            rowSum[i] += mat[i][j];
        }
    }
    for (int i = 0; i < r; i++)
        printf("Row %d Sum = %d\n", i + 1, rowSum[i]);
    return 0;
}