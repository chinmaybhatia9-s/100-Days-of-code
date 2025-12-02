#include <stdio.h>
int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    k = k % n;
    for (int i = 0; i < n; i++)
        printf("%d ", arr[(n - k + i) % n]);
    printf("\n");
    return 0;
}