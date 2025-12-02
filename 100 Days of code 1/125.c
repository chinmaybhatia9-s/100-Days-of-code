#include <stdio.h>
int main() {
    FILE *fp = fopen("append.txt", "a");
    if (fp == NULL) {
        printf("File not found\n");
        return 1;
    }
    char line[200];
    fgets(line, sizeof(line), stdin);
    fprintf(fp, "%s\n", line);
    fclose(fp);
    printf("Text appended\n");
    return 0;
}