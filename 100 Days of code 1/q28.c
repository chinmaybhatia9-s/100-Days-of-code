#include <stdio.h>
int main() {
    int n, product = 1;
    scanf("%d", &n);
    for (int i = 2; i <= n; i += 2)
        product *= i;
    printf("Product = %d\n", product);
    return 0;
}