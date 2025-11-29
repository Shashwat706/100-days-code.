#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char s[1024];
    int count[10] = {0}, i, total = 0;
    if (scanf("%1023s", s) != 1) return 0;
    for (i = 0; s[i] != '\0'; i++) {
        if (isdigit((unsigned char)s[i])) {
            count[s[i] - '0']++;
            total++;
        }
    }
    if (total == 0) {
        printf("No digits found\n");
        return 0;
    }
    int max = -1, digit = 0;
    for (i = 0; i < 10; i++) {
        if (count[i] > max) {
            max = count[i];
            digit = i;
        } else if (count[i] == max && i < digit) {
            digit = i;
        }
    }
    printf("Digit %d occurs the most times: %d\n", digit, max);
    return 0;
}
