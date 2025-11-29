#include <stdio.h>

enum Day {
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
};

int main() {
    enum Day d;

    for(d = SUNDAY; d <= SATURDAY; d++) {
        if(d == SUNDAY)      printf("SUNDAY = %d\n", d);
        else if(d == MONDAY) printf("MONDAY = %d\n", d);
        else if(d == TUESDAY) printf("TUESDAY = %d\n", d);
        else if(d == WEDNESDAY) printf("WEDNESDAY = %d\n", d);
        else if(d == THURSDAY) printf("THURSDAY = %d\n", d);
        else if(d == FRIDAY) printf("FRIDAY = %d\n", d);
        else if(d == SATURDAY) printf("SATURDAY = %d\n", d);
    }

    return 0;
}
