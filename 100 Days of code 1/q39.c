#include <stdio.h>
int main() {
    int n, prod = 1, hasOdd = 0;
    scanf("%d", &n);
    while (n != 0) {
        int digit = n % 10;
        if (digit % 2 != 0) {
            prod *= digit;
            hasOdd = 1;
        }
        n /= 10;
    }
    if (hasOdd)
        printf("Product of odd digits = %d\n", prod);
    else
        printf("No odd digits found\n");
    return 0;
}