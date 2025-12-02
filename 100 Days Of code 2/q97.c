#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if (i == 0 || str[i - 1] == ' ')
            printf("%c ", str[i]);
    }
    printf("\n");
    return 0;
}