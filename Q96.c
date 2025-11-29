#include <stdio.h>

int main() {
    char str[1000];
    int i = 0, start = 0, end = 0;

    printf("Enter a sentence: ");
    scanf("%[^\n]", str);

    while (1) {
        if (str[i] != ' ' && str[i] != '\0') {
            i++;
        } else {
            end = i - 1;

            while (start < end) {
                char temp = str[start];
                str[start] = str[end];
                str[end] = temp;
                start++;
                end--;
            }

            if (str[i] == '\0')
                break;

            i++;
            start = i;
        }
    }

    printf("Reversed words: %s\n", str);

    return 0;
}

