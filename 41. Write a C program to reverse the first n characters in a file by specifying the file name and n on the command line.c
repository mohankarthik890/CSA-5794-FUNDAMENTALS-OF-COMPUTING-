#include <stdio.h>

int main() {
    char first_file[100], second_file[100], dest_file[100];
    FILE *f1, *f2, *dest;
    char c;

    printf("Enter first file name: ");
    scanf("%s", first_file);

    printf("Enter second file name: ");
    scanf("%s", second_file);

    printf("Enter destination file name: ");
    scanf("%s", dest_file);

    f1 = fopen(first_file, "r");
    if (f1 == NULL) {
        printf("Unable to open file %s\n", first_file);
        return 1;
    }

    f2 = fopen(second_file, "r");
    if (f2 == NULL) {
        printf("Unable to open file %s\n", second_file);
        fclose(f1);
        return 1;
    }

    dest = fopen(dest_file, "w");
    if (dest == NULL) {
        printf("Unable to create file %s\n", dest_file);
        fclose(f1);
        fclose(f2);
        return 1;
    }

    while ((c = fgetc(f1)) != EOF) {
        fputc(c, dest);
    }

    while ((c = fgetc(f2)) != EOF) {
        fputc(c, dest);
    }

    printf("File merging successful\n");

    fclose(f1);
    fclose(f2);
    fclose(dest);

    return 0;
}

