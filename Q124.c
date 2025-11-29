#include <stdio.h>

int main() {
    FILE *src, *dest;
    char sourceFile[100], destFile[100];
    char ch;

    printf("Enter source file name: ");
    scanf("%s", sourceFile);

    printf("Enter destination file name: ");
    scanf("%s", destFile);

    src = fopen(sourceFile, "r");
    if(src == NULL) {
        printf("Source file cannot be opened.");
        return 0;
    }

    dest = fopen(destFile, "w");
    if(dest == NULL) {
        printf("Destination file cannot be created.");
        fclose(src);
        return 0;
    }

    while((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }

    fclose(src);
    fclose(dest);

    printf("File copied successfully.");

    return 0;
}
