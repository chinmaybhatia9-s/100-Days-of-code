#include <stdio.h>
enum Menu {ADD = 1, SUBTRACT, MULTIPLY};
int main() {
    int a, b, choice;
    scanf("%d %d %d", &a, &b, &choice);
    switch (choice) {
        case ADD: printf("Sum = %d\n", a + b); break;
        case SUBTRACT: printf("Difference = %d\n", a - b); break;
        case MULTIPLY: printf("Product = %d\n", a * b); break;
        default: printf("Invalid choice\n");
    }
    return 0;
}