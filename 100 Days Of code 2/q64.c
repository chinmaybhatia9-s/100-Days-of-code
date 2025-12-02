#include <stdio.h>
int main() {
    int n, freq[10] = {0};
    scanf("%d", &n);
    while (n != 0) {
        freq[n % 10]++;
        n /= 10;
    }
    int max = 0, digit = 0;
    for (int i = 0; i < 10; i++) {
        if (freq[i] > max) {
            max = freq[i];
            digit = i;
        }
    }
    printf("Most frequent digit = %d\n", digit);
    return 0;
}