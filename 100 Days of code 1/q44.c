#include <stdio.h>
int main() {
    int n;
    float sum = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        float term = (2 * i + 1) / (float)(2 * i + 2);
        sum += term;
    }
    printf("Sum = %.2f\n", sum);
    return 0;
}