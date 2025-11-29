#include <stdio.h>

enum Status { SUCCESS, FAILURE, TIMEOUT };

int main() {
    enum Status result;
    result = SUCCESS;   // change to FAILURE or TIMEOUT to test

    if(result == SUCCESS)
        printf("Operation Successful!");
    else if(result == FAILURE)
        printf("Operation Failed!");
    else if(result == TIMEOUT)
        printf("Operation Timed Out!");

    return 0;
}
