#include <stdio.h>

int main() {
    int a[100][100], rows, cols, i, j, d;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    printf("Enter elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (d = 0; d < rows + cols - 1; d++) {
        i = d < cols ? 0 : d - cols + 1;
        j = d < cols ? d : cols - 1;

        while (i < rows && j >= 0) {
            printf("%d ", a[i][j]);
            i++;
            j--;
        }
    }

    printf("\n");
    return 0;
}
