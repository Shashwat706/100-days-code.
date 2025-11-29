#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n], visited[n];
    for(int i = 0; i < n; i++)
        visited[i] = 0;

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        if(visited[arr[i]] == 1) {
            printf("%d", arr[i]);
            return 0;
        }
        visited[arr[i]] = 1;
    }

    return 0;
}
