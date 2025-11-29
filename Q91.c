#include <stdio.h>

int main() {
    char str[1000], result[1000];
    int i = 0, j = 0;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    while (str[i] != '\0') {
        char c = str[i];
        if (!(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
              c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')) {
            result[j] = c;
            j++;
        }
        i++;
    }

    result[j] = '\0';

    printf("String after removing vowels: %s\n", result);

    return 0;
}
