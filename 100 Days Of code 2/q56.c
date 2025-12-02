#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n); // Number of elements
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]); // Read elements
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]); // Print elements
    printf("\n");
    return 0;
}