#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    fgets(str, sizeof(str), stdin);
    int len = strlen(str);
    if (str[len - 1] == '\n') len--;
    int isPalindrome = 1;
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            isPalindrome = 0;
            break;
        }
    }
    printf("%s\n", isPalindrome ? "Palindrome" : "Not Palindrome");
    return 0;
}