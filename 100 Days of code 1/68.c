#include <stdio.h>
#include <ctype.h>

int main() {
    char str[200];
    fgets(str, sizeof(str), stdin);

    int digits = 0, specials = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (isdigit(str[i]))
            digits++;
        else if (!isalpha(str[i]) && !isspace(str[i]))
            specials++;
    }

    printf("Digits = %d\nSpecial Characters = %d\n", digits, specials);
    return 0;
}