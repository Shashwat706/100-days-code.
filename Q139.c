#include <stdio.h>

enum Status {
    SUCCESS = 10,
    FAILURE = 20,
    TIMEOUT = 30
};

int main() {
    printf("SUCCESS stored as = %d\n", SUCCESS);
    printf("FAILURE stored as = %d\n", FAILURE);
    printf("TIMEOUT stored as = %d\n", TIMEOUT);

    return 0;
}
