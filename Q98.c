#include <stdio.h>

int main() {
    char str[1000];
    int i = 0, start = 0, lastSpace = -1;

    printf("Enter a full name: ");
    scanf("%[^\n]", str);

    while (str[i] != '\0') {
        if (str[i] == ' ')
            lastSpace = i;
        i++;
    }

    if (lastSpace == -1) {
        printf("%s\n", str);
        return 0;
    }

    if (str[0] != ' ')
        printf("%c ", str[0]);

    i = 1;
    while (i < lastSpace) {
        if (str[i] == ' ' && str[i + 1] != ' ')
            printf("%c ", str[i + 1]);
        i++;
    }

    printf("%s\n", str + lastSpace + 1);

    return 0;
}
