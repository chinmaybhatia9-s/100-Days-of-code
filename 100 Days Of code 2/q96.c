#include <stdio.h>
#include <string.h>

void reverse(char *start, char *end) {
    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char str[200];
    fgets(str, sizeof(str), stdin);

    char *wordStart = NULL;
    for (int i = 0; str[i] != '\0'; i++) {
        if (wordStart == NULL && str[i] != ' ' && str[i] != '\n')
            wordStart = &str[i];
        if ((str[i] == ' ' || str[i] == '\n') && wordStart) {
            reverse(wordStart, &str[i - 1]);
            wordStart = NULL;
        }
    }
    printf("%s", str);
    return 0;
}