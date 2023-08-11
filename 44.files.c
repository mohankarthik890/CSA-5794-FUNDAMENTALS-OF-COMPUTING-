#include <stdio.h>

int main() {
    FILE *fp;
    char filename[50], c;
    printf("Enter the name of file for reading: ");
    scanf("%s", filename);

    fp = fopen(filename, "r"); // opening the file in read mode

    if (fp == NULL) { // checking if the file exists or not
        printf("Error opening file!");
        return 0;
    }

    printf("\nContents of file:\n");
    while ((c = fgetc(fp)) != EOF) { // reading the file character by character
        printf("%c", c);
    }

    fclose(fp); // closing the file

    return 0;
}

