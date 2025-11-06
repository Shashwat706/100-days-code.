#include <stdio.h>

int main() {
    int n, i, posCount = 0, negCount = 0, zeroCount = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        if (arr[i] > 0)
            posCount++;
        else if (arr[i] < 0)
            negCount++;
        else
            zeroCount++;
    }

    printf("Total positive numbers = %d\n", posCount);
    printf("Total negative numbers = %d\n", negCount);
    printf("Total zeros = %d\n", zeroCount);

    return 0;
}
