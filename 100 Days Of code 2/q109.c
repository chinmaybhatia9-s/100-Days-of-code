#include <stdio.h>
int main() {
    int n, k, maxSum = 0;
    scanf("%d %d", &n, &k);
    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    for (int i = 0; i <= n - k; i++) {
        int sum = 0;
        for (int j = 0; j < k; j++)
            sum += arr[i + j];
        if (sum > maxSum) maxSum = sum;
    }
    printf("Max Sum = %d\n", maxSum);
    return 0;
}