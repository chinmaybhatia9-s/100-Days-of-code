#include <stdio.h>
int main() {
    char str[100];
    int spaces = 0, digits = 0, specials = 0;
    fgets(str, sizeof(str), stdin);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') spaces++;
        else if (str[i] >= '0' && str[i] <= '9') digits++;
        else if ((str[i] < 'A' || str[i] > 'Z') && (str[i] < 'a' || str[i] > 'z')) specials++;
    }
    printf("Spaces = %d, Digits = %d, Special Characters = %d\n", spaces, digits, specials);
    return 0;
}