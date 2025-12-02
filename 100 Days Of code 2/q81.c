#include <stdio.h>
int main() {
    char str[100];
    int count = 0;
    fgets(str, sizeof(str), stdin);
    while (str[count] != '\0' && str[count] != '\n')
        count++;
    printf("Length = %d\n", count);
    return 0;
}