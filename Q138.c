#include <stdio.h>

enum Days { SUNDAY = 1, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY };

int main() {
    enum Days d;
    const char *names[] = {
        "SUNDAY", "MONDAY", "TUESDAY",
        "WEDNESDAY", "THURSDAY", "FRIDAY", "SATURDAY"
    };

    for(d = SUNDAY; d <= SATURDAY; d++) {
        printf("%s = %d\n", names[d - 1], d);
    }

    return 0;
}
