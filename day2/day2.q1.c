#include <stdio.h>

int main() {
    float length, breadth, area, perimeter;

    // Taking input from user
    printf("Enter length of the rectangle: ");
    scanf("%f", &length);

    printf("Enter breadth of the rectangle: ");
    scanf("%f", &breadth);

    // Calculating area and perimeter
    area = length * breadth;
    perimeter = 2 * (length + breadth);

    // Displaying results
    printf("Area of the rectangle = %.2f\n", area);
    printf("Perimeter of the rectangle = %.2f\n", perimeter);

    return 0;
}
