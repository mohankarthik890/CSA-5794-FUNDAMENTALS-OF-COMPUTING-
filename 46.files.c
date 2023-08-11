#include <stdio.h>

int main()
{
    FILE *fptr;
    char filename[100];
    char text[1000];

    printf("Enter the name of file for appending: ");
    scanf("%s", filename);

    // Open file in append mode
    fptr = fopen(filename, "a");

    if (fptr == NULL)
    {
        printf("Error opening file %s!\n", filename);
        return 1;
    }

    printf("Enter the text to append (max 1000 characters):\n");
    scanf(" %[^\n]s", text);

    // Append the input text to file
    fprintf(fptr, "%s", text);
    fclose(fptr);

    printf("Data has been appended to file %s.\n", filename);
    return 0;
}

