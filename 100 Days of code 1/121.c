#include <stdio.h>
int main() {
    char name[100];
    int age;
    FILE *fp = fopen("info.txt", "w");
    if (fp == NULL) {
        printf("File creation failed\n");
        return 1;
    }
    scanf("%s %d", name, &age);
    fprintf(fp, "Name: %s\nAge: %d\n", name, age);
    fclose(fp);
    printf("Data saved successfully\n");
    return 0;
}