#include <stdio.h>

int main() {
    char str[1000], longest[1000], current[1000];
    int i = 0, j = 0, maxLen = 0, currLen = 0;

    printf("Enter a sentence: ");
    scanf("%[^\n]", str);

    while (str[i] != '\0') {
        if (str[i] != ' ') {
            current[j] = str[i];
            j++;
            currLen++;
        } else {
            current[j] = '\0';
            if (currLen > maxLen) {
                maxLen = currLen;
                int k = 0;
                while (current[k] != '\0') {
                    longest[k] = current[k];
                    k++;
                }
                longest[k] = '\0';
            }
            j = 0;
            currLen = 0;
        }
        i++;
    }

    current[j] = '\0';
    if (currLen > maxLen) {
        int k = 0;
        while (current[k] != '\0') {
            longest[k] = current[k];
            k++;
        }
        longest[k] = '\0';
    }

    printf("Longest word: %s\n", longest);

    return 0;
}
