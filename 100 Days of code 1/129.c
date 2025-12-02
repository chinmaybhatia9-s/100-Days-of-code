#include <stdio.h>
int main() {
    FILE *fp = fopen("numbers.txt", "r");
    if (fp == NULL) {
        printf("File not found\n");
        return 1;
    }
    int num, sum = 0, count = 0;
    while (fscanf(fp, "%d", &num) == 1) {
        sum += num;
        count++;
    }
    fclose(fp);
    printf("Sum = %d, Average = %.2f\n", sum, (float)sum / count);
    return 0;
}