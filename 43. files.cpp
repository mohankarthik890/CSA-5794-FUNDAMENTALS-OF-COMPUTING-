#include <stdio.h>

int main() {
    FILE *fp;
    char filename[50], text[1000];
    
    printf("Enter name of file to open: ");
    scanf("%s", filename);
    
    fp = fopen(filename, "r");
    
    if (fp == NULL) {
        printf("The file is not found.\n");
        return 0;
    }
    
    printf("The file is successfully opened.\n");
    
    printf("\nThe contents of the file are:\n");
    while (fgets(text, sizeof(text), fp) != NULL) {
        printf("%s", text);
    }
    
    fclose(fp);
    printf("\nFile closed successfully.\n");
    
    return 0;
}

