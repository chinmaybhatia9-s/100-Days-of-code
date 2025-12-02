#include <stdio.h>
int main() {
    int n, distinct = 1;
    scanf("%d", &n);
    int mat[n][n], diag[n], count = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &mat[i][j]);
    for (int i = 0; i < n; i++) {
        int val = mat[i][i];
        for (int j = 0; j < count; j++) {
            if (diag[j] == val) {
                distinct = 0;
                break;
            }
        }
        diag[count++] = val;
    }
    printf("%s\n", distinct ? "Distinct" : "Not Distinct");
    return 0;
}