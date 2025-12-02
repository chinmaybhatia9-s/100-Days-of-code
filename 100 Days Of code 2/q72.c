#include <stdio.h>
int main() {
    int r, c, sum = 0;
    scanf("%d %d", &r, &c);
    int mat[r][c];
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++) {
            scanf("%d", &mat[i][j]);
            sum += mat[i][j];
        }
    printf("Sum = %d\n", sum);
    return 0;
}