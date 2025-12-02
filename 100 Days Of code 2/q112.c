#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[n], maxSum = -1e9, currSum = 0;
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    for (int i = 0; i < n; i++) {
        currSum += arr[i];
        if (currSum > maxSum) maxSum = currSum;
        if (currSum < 0) currSum = 0;
    }
    printf("Max Sum = %d\n", maxSum);
    return 0;
}