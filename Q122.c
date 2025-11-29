#include <stdio.h>

int main() {
    FILE *fp;
    char line[200];

    fp = fopen("info.txt", "r");

    if(fp == NULL) {
        printf("Unable to open file.");
        return 0;
    }

    while(fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);
    }

    fclose(fp);
    return 0;
}
