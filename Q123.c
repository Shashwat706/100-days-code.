#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char ch;
    int characters = 0, words = 0, lines = 1;
    int inWord = 0;

    fp = fopen("info.txt", "r");
    if(fp == NULL) {
        printf("Unable to open file.");
        return 0;
    }

    while((ch = fgetc(fp)) != EOF) {
        characters++;

        if(ch == '\n')
            lines++;

        if(!isspace(ch) && inWord == 0) {
            inWord = 1;
            words++;
        } else if(isspace(ch)) {
            inWord = 0;
        }
    }

    fclose(fp);

    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    return 0;
}
