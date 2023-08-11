#include <stdio.h>

int main() {
    char source_file[50], dest_file[50];
    FILE *source, *dest;
    int count = 0;
    char ch;

    // Get source file name from user
    printf("Enter the source file name: ");
    scanf("%s", source_file);

    // Open source file in read mode
    source = fopen(source_file, "r");
    if (source == NULL) {
        printf("Error opening source file!");
        return 1;
    }

    // Get destination file name from user
    printf("Enter the destination file name: ");
    scanf("%s", dest_file);

    // Open destination file in write mode
    dest = fopen(dest_file, "w");
    if (dest == NULL) {
        printf("Error opening destination file!");
        return 1;
    }

    // Copy contents of source file to destination file
    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, dest);
        count++;
    }

    printf("%d bytes copied from '%s' to '%s'\n", count, source_file, dest_file);

    // Close files
    fclose(source);
    fclose(dest);

    return 0;
}

