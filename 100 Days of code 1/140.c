#include <stdio.h>
enum Gender {MALE, FEMALE};
struct Person {
    char name[50];
    enum Gender gender;
};
int main() {
    struct Person p = {"Jayant", MALE};
    printf("Name: %s\nGender: %s\n", p.name, p.gender == MALE ? "Male" : "Female");
    return 0;
}