#include <stdio.h>
#include <string.h>
int main() {
    char s[100];
    int maxLen = 0;
    fgets(s, sizeof(s), stdin);
    int len = strlen(s);
    if (s[len - 1] == '\n') len--;

    for (int i = 0; i < len; i++) {
        int freq[256] = {0}, currLen = 0;
        for (int j = i; j < len; j++) {
            if (freq[(int)s[j]]) break;
            freq[(int)s[j]] = 1;
            currLen++;
        }
        if (currLen > maxLen) maxLen = currLen;
    }
    printf("Max Length = %d\n", maxLen);
    return 0;
}