#include <stdio.h>

enum Role { ADMIN = 1, USER, GUEST };

int main() {
    enum Role r;
    printf("Enter role (1=ADMIN, 2=USER, 3=GUEST): ");
    scanf("%d", &r);

    if(r == ADMIN)
        printf("Welcome Admin! You have full access.");
    else if(r == USER)
        printf("Hello User! You have limited access.");
    else if(r == GUEST)
        printf("Welcome Guest! You have view-only access.");
    else
        printf("Invalid Role!");

    return 0;
}
