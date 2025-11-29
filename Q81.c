#include <stdio.h>

int main() {
    char str[1000];
    int i = 0, count = 0;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    while (str[i] != '\0') {
        count++;
        i++;
    }

    printf("Number of characters: %d\n", count);

    return 0;
}
