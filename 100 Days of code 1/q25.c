#include <stdio.h>
int main() {
    char op;
    int a, b;
    scanf(" %c %d %d", &op, &a, &b);
    switch(op) {
        case '+': printf("%d\n", a + b); break;
        case '-': printf("%d\n", a - b); break;
        case '*': printf("%d\n", a * b); break;
        case '/': 
            if (b != 0) printf("%d\n", a / b);
            else printf("Division by zero\n");
            break;
        case '%': 
            if (b != 0) printf("%d\n", a % b);
            else printf("Modulo by zero\n");
            break;
        default: printf("Invalid operator\n");
    }
    return 0;
}