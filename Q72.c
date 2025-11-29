#include <stdio.h>

int main() {
    int a[100][100], rows, cols, i, j, sum = 0;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    printf("Enter elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &a[i][j]);
            sum += a[i][j];
        }
    }

    printf("Sum of all elements: %d\n", sum);

    return 0;
}
