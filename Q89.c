#include <stdio.h>

int main() {
    char str[1000], ch;
    int i = 0, count = 0;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    getchar();

    printf("Enter character to count: ");
    scanf("%c", &ch);

    while (str[i] != '\0') {
        if (str[i] == ch) {
            count++;
        }
        i++;
    }

    printf("Frequency of '%c': %d\n", ch, count);

    return 0;
}
