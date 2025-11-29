#include <stdio.h>

enum Gender { MALE, FEMALE, OTHER };

struct Person {
    char name[50];
    int age;
    enum Gender gender;
};

int main() {
    struct Person p = {"Rahul", 20, MALE};

    printf("Name: %s\n", p.name);
    printf("Age: %d\n", p.age);

    if(p.gender == MALE)
        printf("Gender: Male\n");
    else if(p.gender == FEMALE)
        printf("Gender: Female\n");
    else
        printf("Gender: Other\n");

    return 0;
}

