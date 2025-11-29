#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    char name[50];
    int id;
    float salary;
    struct Date doj;   
};

int main() {
    struct Employee e;

    printf("Enter employee name: ");
    scanf("%49s", e.name);

    printf("Enter employee ID: ");
    scanf("%d", &e.id);

    printf("Enter salary: ");
    scanf("%f", &e.salary);

    printf("Enter date of joining (day month year): ");
    scanf("%d %d %d", &e.doj.day, &e.doj.month, &e.doj.year);

    printf("\n--- Employee Details ---\n");
    printf("Name: %s\n", e.name);
    printf("ID: %d\n", e.id);
    printf("Salary: %.2f\n", e.salary);
    printf("Date of Joining: %02d-%02d-%04d\n", e.doj.day, e.doj.month, e.doj.year);

    return 0;
}
