#include <stdio.h>

int main() {
    char s[100000];
    int c;

    int idx = 0;
    while ((c = getchar()) != EOF && c != '\n') {
        s[idx++] = (char)c;
    }
    s[idx] = '\0';

    int last[256];
    for (int i = 0; i < 256; i++)
        last[i] = -1;

    int start = 0, maxLen = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        unsigned char ch = s[i];
        if (last[ch] >= start)
            start = last[ch] + 1;
        last[ch] = i;
        int len = i - start + 1;
        if (len > maxLen)
            maxLen = len;
    }

    printf("%d", maxLen);
    return 0;
}

