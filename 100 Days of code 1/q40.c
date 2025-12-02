#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    printf("1's Complement = ");
    while (n != 0) {
        int bit = n % 10;
        printf("%d", bit == 0 ? 1 : 0);
        n /= 10;
    }
    printf("\n");
    return 0;
}