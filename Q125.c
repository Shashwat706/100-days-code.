#include <stdio.h>

int main() {
    FILE *fp;
    char filename[100];
    char text[200];

    printf("Enter file name: ");
    scanf("%s", filename);
    getchar();

    fp = fopen(filename, "a");
    if(fp == NULL) {
        printf("Unable to open file.");
        return 0;
    }

    printf("Enter text to append: ");
    fgets(text, sizeof(text), stdin);

    fputs(text, fp);

    fclose(fp);

    printf("Text appended successfully.");

    return 0;
}
