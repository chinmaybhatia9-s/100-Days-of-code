#include <stdio.h>
#include <math.h>
int main() {
    int n, first, last, digits = 0;
    scanf("%d", &n);
    int temp = n;
    last = temp % 10;
    while (temp >= 10) {
        temp /= 10;
        digits++;
    }
    first = temp;
    int pow10 = pow(10, digits);
    int middle = (n % pow10) / 10;
    int swapped = last * pow10 + middle * 10 + first;
    printf("Swapped Number = %d\n", swapped);
    return 0;
}