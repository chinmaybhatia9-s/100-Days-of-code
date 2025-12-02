#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    fgets(str, sizeof(str), stdin);

    char *token = strtok(str, " \n");
    char last[50];
    while (token) {
        strcpy(last, token);
        token = strtok(NULL, " \n");
    }

    token = strtok(str, " \n");
    while (token) {
        if (strcmp(token, last) == 0)
            printf("%s", last);
        else
            printf("%c. ", token[0]);
        token = strtok(NULL, " \n");
    }
    printf("\n");
    return 0;
}