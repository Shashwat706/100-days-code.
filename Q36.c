#include <stdio.h>

int main() {
    int num1, num2, hcf;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    int a = num1;
    int b = num2;

    while (a != b) {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }

    hcf = a;
    printf("HCF (GCD) of %d and %d is %d\n", num1, num2, hcf);

    return 0;
}
