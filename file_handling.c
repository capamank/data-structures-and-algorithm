#include <stdio.h>

int main() {
    FILE *file;
    char x[100];

    // Open the file for reading
    file = fopen("hi.txt", "r");
    if (file == NULL) {
        printf("Error: Could not open file 'hi.txt'\n");
        return 1;
    }

    printf("File content:\n");
    while (fgets(x, sizeof(x), file)) {
        printf("%s", x);
    }
    fclose(file);

    // Ask if user wants to edit
    char c;
    printf("\n\nDo you want to edit this file (y/n)? ");
    scanf(" %c", &c);

    if (c == 'y') {
        file = fopen("hi.txt", "a");
        if (file == NULL) {
            printf(" Error: Could not open file for appending.\n");
            return 1;
        }

        char p[100];
        printf("Enter text to append: ");
        scanf(" %[^\n]", p);  // reads full line including spaces

        fprintf(file, "\n%s", p);
        fclose(file);
        printf("File edited successfully!\n");
    } else {
        printf(" No changes made.\n");
    }

    return 0;
}

