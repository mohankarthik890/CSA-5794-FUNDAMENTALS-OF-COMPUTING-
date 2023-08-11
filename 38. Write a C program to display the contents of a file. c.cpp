#include <stdio.h>

int main() {
    char filename[50];
    printf("Enter the file name: ");
    scanf("%s", filename);
    
    // Open file in read mode
    FILE *f = fopen(filename, "r");
    if (f == NULL) {
        printf("Error opening file!");
        return 1;
    }
    
    // Read data from file and display it
    char ch;
    printf("\nContents of file \"%s\":\n", filename);
    while ((ch = fgetc(f)) != EOF) {
        printf("%c", ch);
    }
    
    // Close file
    fclose(f);
    
    return 0;
}

