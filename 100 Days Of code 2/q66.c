#include <stdio.h>
int main() {
    int n, x;
    scanf("%d", &n);
    int arr[n + 1];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    scanf("%d", &x);
    int i = n - 1;
    while (i >= 0 && arr[i] > x) {
        arr[i + 1] = arr[i];
        i--;
    }
    arr[i + 1] = x;
    for (int i = 0; i <= n; i++) printf("%d ", arr[i]);
    printf("\n");
    return 0;
}