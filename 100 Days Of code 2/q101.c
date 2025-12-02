#include <stdio.h>
int firstOccurrence(int arr[], int n, int target) {
    int low = 0, high = n - 1, res = -1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == target) {
            res = mid;
            high = mid - 1;
        } else if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return res;
}

int lastOccurrence(int arr[], int n, int target) {
    int low = 0, high = n - 1, res = -1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == target) {
            res = mid;
            low = mid + 1;
        } else if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return res;
}

int main() {
    int n, target;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    scanf("%d", &target);
    int first = firstOccurrence(arr, n, target);
    int last = lastOccurrence(arr, n, target);
    printf("%d %d\n", first, last);
    return 0;
}