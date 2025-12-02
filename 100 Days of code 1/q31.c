#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int binary[32], i = 0;
    if (n == 0) {
        printf("Binary = 0\n");
        return 0;
    }
    while (n > 0) {
        binary[i++] = n % 2;
        n /= 2;
    }
    printf("Binary = ");
    for (int j = i - 1; j >= 0; j--)
        printf("%d", binary[j]);
    printf("\n");
    return 0;
}