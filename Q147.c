#include <stdio.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    struct Employee e[3], emp;
    FILE *fp;
    int i;

    fp = fopen("employee.dat", "wb");
    if(fp == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    for(i = 0; i < 3; i++) {
        printf("Enter details of employee %d\n", i + 1);
        printf("Name: ");
        scanf("%49s", e[i].name);
        printf("ID: ");
        scanf("%d", &e[i].id);
        printf("Salary: ");
        scanf("%f", &e[i].salary);
        fwrite(&e[i], sizeof(struct Employee), 1, fp);
        printf("\n");
    }
    fclose(fp);

    fp = fopen("employee.dat", "rb");
    if(fp == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    printf("\n--- Employee Data Read From File ---\n");
    while(fread(&emp, sizeof(struct Employee), 1, fp)) {
        printf("Name: %s\n", emp.name);
        printf("ID: %d\n", emp.id);
        printf("Salary: %.2f\n\n", emp.salary);
    }

    fclose(fp);
    return 0;
}
