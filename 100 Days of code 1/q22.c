#include <stdio.h>
int main() {
    float cp, sp;
    scanf("%f %f", &cp, &sp);
    if (sp > cp)
        printf("Profit = %.2f%%\n", ((sp - cp) / cp) * 100);
    else if (cp > sp)
        printf("Loss = %.2f%%\n", ((cp - sp) / cp) * 100);
    else
        printf("No Profit No Loss\n");
    return 0;
}