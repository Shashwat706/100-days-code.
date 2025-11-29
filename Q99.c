#include <stdio.h>

int main() {
    char date[20], day[3], year[5];
    int month;

    printf("Enter date in dd/mm/yyyy format: ");
    scanf("%s", date);

    day[0] = date[0];
    day[1] = date[1];
    day[2] = '\0';

    month = (date[3] - '0') * 10 + (date[4] - '0');

    year[0] = date[6];
    year[1] = date[7];
    year[2] = date[8];
    year[3] = date[9];
    year[4] = '\0';

    char *months[] = {
        "", "Jan", "Feb", "Mar", "Apr", "May", "Jun",
        "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
    };

    if (month < 1 || month > 12) {
        printf("Invalid month\n");
        return 0;
    }

    printf("%s-%s-%s\n", day, months[month], year);

    return 0;
}
