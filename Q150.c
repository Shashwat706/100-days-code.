#include <stdio.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    struct Employee e, *ptr;

    ptr = &e;

    printf("Enter employee name: ");
    scanf("%49s", ptr->name);

    printf("Enter employee ID: ");
    scanf("%d", &ptr->id);

    printf("Enter salary: ");
    scanf("%f", &ptr->salary);

    printf("\n--- Employee Details ---\n");
    printf("Name: %s\n", ptr->name);
    printf("ID: %d\n", ptr->id);
    printf("Salary: %.2f\n", ptr->salary);

    return 0;
}
