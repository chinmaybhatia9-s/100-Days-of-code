#include <stdio.h>
int main() {
    int n, isSymmetric = 1;
    scanf("%d", &n);
    int mat[n][n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &mat[i][j]);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (mat[i][j] != mat[j][i])
                isSymmetric = 0;
    printf("%s\n", isSymmetric ? "Symmetric" : "Not Symmetric");
    return 0;
}