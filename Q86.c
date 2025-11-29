#include <stdio.h>

int main() {
    char str[1000];
    int i = 0, j, len = 0, isPalindrome = 1;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    while (str[len] != '\0') {
        len++;
    }

    j = len - 1;
    while (i < j) {
        if (str[i] != str[j]) {
            isPalindrome = 0;
            break;
        }
        i++;
        j--;
    }

    if (isPalindrome)
        printf("String is a palindrome.\n");
    else
        printf("String is not a palindrome.\n");

    return 0;
}
