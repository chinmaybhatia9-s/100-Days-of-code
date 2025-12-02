#include <stdio.h>
int main() {
    FILE *fp = fopen("students.txt", "w");
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        char name[100];
        int roll;
        float marks;
        scanf("%s %d %f", name, &roll, &marks);
        fprintf(fp, "%s %d %.2f\n", name, roll, marks);
    }
    fclose(fp);

    fp = fopen("students.txt", "r");
    char name[100];
    int roll;
    float marks;
    while (fscanf(fp, "%s %d %f", name, &roll, &marks) == 3)
        printf("Name: %s, Roll: %d, Marks: %.2f\n", name, roll, marks);
    fclose(fp);
    return 0;
}