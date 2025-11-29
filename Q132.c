#include <stdio.h>

enum TrafficLight { RED, YELLOW, GREEN };

int main() {
    enum TrafficLight signal;
    signal = RED;   // change to YELLOW or GREEN to test

    if(signal == RED)
        printf("Stop");
    else if(signal == YELLOW)
        printf("Wait");
    else if(signal == GREEN)
        printf("Go");

    return 0;
}
