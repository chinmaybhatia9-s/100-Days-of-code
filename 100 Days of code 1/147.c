#include <stdio.h>
struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    struct Employee e;
    scanf("%s %d %f", e.name, &e.id, &e.salary);

    FILE *fp = fopen("emp.dat", "wb");
    fwrite(&e, sizeof(e), 1, fp);
    fclose(fp);

    fp = fopen("emp.dat", "rb");
    fread(&e, sizeof(e), 1, fp);
    fclose(fp);

    printf("Name: %s\nID: %d\nSalary: %.2f\n", e.name, e.id, e.salary);
    return 0;
}