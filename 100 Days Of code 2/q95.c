#include <stdio.h>
#include <string.h>

int main() {
    char s1[100], s2[100];
    scanf("%s %s", s1, s2);

    if (strlen(s1) != strlen(s2)) {
        printf("Not Rotation\n");
        return 0;
    }

    char temp[200];
    strcpy(temp, s1);
    strcat(temp, s1);

    if (strstr(temp, s2))
        printf("Rotation\n");
    else
        printf("Not Rotation\n");

    return 0;
}