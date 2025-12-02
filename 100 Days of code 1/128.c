#include <stdio.h>
#include <ctype.h>
int main() {
    FILE *fp = fopen("text.txt", "r");
    if (fp == NULL) {
        printf("File not found\n");
        return 1;
    }
    int vowels = 0, consonants = 0;
    char ch;
    while ((ch = fgetc(fp)) != EOF) {
        if (isalpha(ch)) {
            ch = tolower(ch);
            if (ch == 'a'|| ch == 'e'|| ch == 'i'|| ch == 'o'|| ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }
    fclose(fp);
    printf("Vowels = %d, Consonants = %d\n", vowels, consonants);
    return 0;
}