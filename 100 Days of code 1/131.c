#include <stdio.h>
enum Day {SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY};
int main() {
    for (enum Day d = SUNDAY; d <= SATURDAY; d++)
        printf("%d: %s\n", d, (char*[]){"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"}[d]);
    return 0;
}