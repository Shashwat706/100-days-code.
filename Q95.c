#include <stdio.h>
#include <string.h>

int main() {
    char s1[1000], s2[1000], temp[2000];

    printf("Enter first string: ");
    scanf("%[^\n]", s1);
    getchar();

    printf("Enter second string: ");
    scanf("%[^\n]", s2);

    if (strlen(s1) != strlen(s2)) {
        printf("Not a rotation.\n");
        return 0;
    }

    strcpy(temp, s1);
    strcat(temp, s1);

    if (strstr(temp, s2) != NULL)
        printf("Second string is a rotation of the first.\n");
    else
        printf("Not a rotation.\n");

    return 0;
}

