#include <stdio.h>

int main() {
    char str[1000], rev[1000];
    int i = 0, j, len = 0;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    while (str[len] != '\0') {
        len++;
    }

    j = 0;
    for (i = len - 1; i >= 0; i--) {
        rev[j] = str[i];
        j++;
    }
    rev[j] = '\0';

    printf("Reversed string: %s\n", rev);

    return 0;
}
