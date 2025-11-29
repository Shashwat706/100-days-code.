#include <stdio.h>

int main() {
    char str[1000];
    int freq[26] = {0};
    int i = 0;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    while (str[i] != '\0') {
        char ch = str[i];

        if (ch >= 'a' && ch <= 'z') {
            if (freq[ch - 'a'] == 1) {
                printf("First repeating lowercase alphabet: %c\n", ch);
                return 0;
            }
            freq[ch - 'a']++;
        }
        i++;
    }

    printf("No repeating lowercase alphabet found.\n");
    return 0;
}
