#include <stdio.h>
int main() {
    char src[100], dest[100];
    scanf("%s %s", src, dest);
    FILE *f1 = fopen(src, "r");
    FILE *f2 = fopen(dest, "w");
    if (f1 == NULL || f2 == NULL) {
        printf("Error opening files\n");
        return 1;
    }
    char ch;
    while ((ch = getc(f1)) != EOF)
        putc(ch, f2);
    fclose(f1);
    fclose(f2);
    printf("File copied successfully\n");
    return 0;
}