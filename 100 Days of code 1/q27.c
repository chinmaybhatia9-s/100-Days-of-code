#include <stdio.h>
int main() {
    int n, sum = 0, count = 0, i = 1;
    scanf("%d", &n);
    while (count < n) {
        sum += i;
        i += 2;
        count++;
    }
    printf("Sum = %d\n", sum);
    return 0;
}