#include <stdio.h>
#include <string.h>

int main() {
    char s1[100], s2[100];
    int freq[26] = {0};

    scanf("%s %s", s1, s2);

    if (strlen(s1) != strlen(s2)) {
        printf("Not Anagram\n");
        return 0;
    }

    for (int i = 0; s1[i]; i++) {
        freq[s1[i] - 'a']++;
        freq[s2[i] - 'a']--;
    }

    for (int i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            printf("Not Anagram\n");
            return 0;
        }
    }

    printf("Anagram\n");
    return 0;
}