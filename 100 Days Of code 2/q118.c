#include <stdio.h>
int main() {
    int n, sum = 0;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    int total = n * (n + 1) / 2;
    printf("Missing Number = %d\n", total - sum);
    return 0;
}