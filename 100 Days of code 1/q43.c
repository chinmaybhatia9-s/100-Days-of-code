#include <stdio.h>
int factorial(int x) {
    int f = 1;
    for (int i = 1; i <= x; i++)
        f *= i;
    return f;
}
int main() {
    int n, temp, sum = 0;
    scanf("%d", &n);
    temp = n;
    while (temp != 0) {
        sum += factorial(temp % 10);
        temp /= 10;
    }
    if (sum == n)
        printf("Strong Number\n");
    else
        printf("Not a Strong Number\n");
    return 0;
}