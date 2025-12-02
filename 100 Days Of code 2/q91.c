#include <stdio.h>
int main() {
    char str[100];
    fgets(str, sizeof(str), stdin);
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i] | 32;
        if (!(ch == 'a'|| ch == 'e'|| ch == 'i'|| ch == 'o'|| ch == 'u'))
            printf("%c", str[i]);
    }
    return 0;
}