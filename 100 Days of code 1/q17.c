#include <stdio.h>
#include <math.h>
int main() {
    float a, b, c, d;
    scanf("%f %f %f", &a, &b, &c);
    d = b*b - 4*a*c;
    if (d > 0)
        printf("Real and Distinct Roots\n");
    else if (d == 0)
        printf("Real and Equal Roots\n");
    else
        printf("Complex Roots\n");
    return 0;
}