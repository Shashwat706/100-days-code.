#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student s[5];
    int i, index = 0;
    float max_marks = 0;

    for(i = 0; i < 5; i++) {
        printf("Enter details of student %d\n", i + 1);

        printf("Name: ");
        scanf("%49s", s[i].name);

        printf("Roll No: ");
        scanf("%d", &s[i].roll_no);

        printf("Marks: ");
        scanf("%f", &s[i].marks);

        if(s[i].marks > max_marks) {
            max_marks = s[i].marks;
            index = i;
        }

        printf("\n");
    }

    printf("\n--- Student with Highest Marks ---\n");
    printf("Name: %s\n", s[index].name);
    printf("Roll No: %d\n", s[index].roll_no);
    printf("Marks: %.2f\n", s[index].marks);

    return 0;
}
