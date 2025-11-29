#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

struct Student getTopStudent(struct Student s[], int n) {
    int i, index = 0;
    for(i = 1; i < n; i++) {
        if(s[i].marks > s[index].marks) {
            index = i;
        }
    }
    return s[index]; 
}

int main() {
    struct Student s[5], top;
    int i;

    for(i = 0; i < 5; i++) {
        printf("Enter details for student %d\n", i + 1);

        printf("Name: ");
        scanf("%49s", s[i].name);

        printf("Roll No: ");
        scanf("%d", &s[i].roll_no);

        printf("Marks: ");
        scanf("%f", &s[i].marks);

        printf("\n");
    }

    top = getTopStudent(s, 5);

    printf("\n--- Top Student ---\n");
    printf("Name: %s\n", top.name);
    printf("Roll No: %d\n", top.roll_no);
    printf("Marks: %.2f\n", top.marks);

    return 0;
}
