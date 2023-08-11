#include <stdio.h>

int main() {
    char file_name[50];
    FILE *fp;

    printf("Enter name of file to open for reading: ");
    scanf("%s", file_name);

    fp = fopen(file_name, "r");
    if (fp == NULL) {
        printf("The file '%s' is not found.\n", file_name);
        return 1;
    }

    // File handling code goes here

    fclose(fp);
    return 0;
}

