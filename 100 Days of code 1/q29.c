#include <stdio.h>
int main() {
    int n;
    unsigned long long fact = 1;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        fact *= i;
    printf("Factorial = %llu\n", fact);
    return 0;
}