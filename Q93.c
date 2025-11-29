#include <stdio.h>

int main() {
    char str1[1000], str2[1000];
    int freq1[256] = {0}, freq2[256] = {0};
    int i = 0;

    printf("Enter first string: ");
    scanf("%[^\n]", str1);

    getchar();

    printf("Enter second string: ");
    scanf("%[^\n]", str2);

    while (str1[i] != '\0') {
        freq1[(unsigned char)str1[i]]++;
        i++;
    }

    i = 0;
    while (str2[i] != '\0') {
        freq2[(unsigned char)str2[i]]++;
        i++;
    }

    for (i = 0; i < 256; i++) {
        if (freq1[i] != freq2[i]) {
            printf("Strings are not anagrams.\n");
            return 0;
        }
    }

    printf("Strings are anagrams.\n");
    return 0;
}
