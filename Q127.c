#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *in, *out;
    char ch;

    in = fopen("input.txt", "r");
    if(in == NULL) {
        printf("Error: input.txt cannot be opened.");
        return 0;
    }

    out = fopen("output.txt", "w");
    if(out == NULL) {
        printf("Error: output.txt cannot be created.");
        fclose(in);
        return 0;
    }

    while((ch = fgetc(in)) != EOF) {
        if(islower(ch))
            ch = toupper(ch);

        fputc(ch, out);
    }

    fclose(in);
    fclose(out);

    printf("Conversion completed. Output written to output.txt");

    return 0;
}
