#include <stdio.h>
#include <string.h>
struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student a, b;
    scanf("%s %d %f", a.name, &a.roll, &a.marks);
    scanf("%s %d %f", b.name, &b.roll, &b.marks);

    if (strcmp(a.name, b.name) == 0 && a.roll == b.roll && a.marks == b.marks)
        printf("Identical\n");
    else
        printf("Not Identical\n");
    return 0;
}