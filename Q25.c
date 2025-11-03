#include <stdio.h>

int main() {
    char operator;
    int num1, num2;
    
    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &operator);
    
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    switch (operator) {
        case '+':
            printf("Result: %d\n", num1 + num2);
            break;
        case '-':
            printf("Result: %d\n", num1 - num2);
            break;
        case '*':
            printf("Result: %d\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0)
                printf("Result: %.2f\n", (float)num1 / num2);
            else
                printf("Error: Division by zero is not allowed.\n");
            break;
        case '%':
            if (num2 != 0)
                printf("Result: %d\n", num1 % num2);
            else
                printf("Error: Modulus by zero is not allowed.\n");
            break;
        default:
            printf("Error: Invalid operator.\n");
    }

    return 0;
}
