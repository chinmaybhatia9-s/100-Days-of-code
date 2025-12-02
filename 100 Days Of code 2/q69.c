#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[n], first = -1e9, second = -1e9;
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }
    printf("Second Largest = %d\n", second);
    return 0;
}