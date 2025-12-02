#include <stdio.h>
struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student s = {"Jayant", 101, 95.5};
    struct Student *ptr = &s;
    ptr->marks += 4.5;
    printf("Name: %s\nRoll: %d\nMarks: %.2f\n", ptr->name, ptr->roll, ptr->marks);
    return 0;
}