#include <stdio.h>

typedef struct {
    int roll_no;
    char name[50];
} Student;

int main() {
    int n,i;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    Student s[n];
    
    // Read input from user
    for (i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i+1);
        printf("Enter roll number: ");
        scanf("%d", &s[i].roll_no);
        printf("Enter name: ");
        scanf("%s", s[i].name);
    }
    
    // Open file in write mode
    FILE *f = fopen("Students.txt", "w");
    if (f == NULL) {
        printf("Error opening file!");
        return 1;
    }
    
    // Write data to file
    for (i = 0; i < n; i++) {
        fprintf(f, "%d\n%s\n", s[i].roll_no, s[i].name);
    }
    
    // Close file
    fclose(f);
    
    printf("\nData saved to file \"Students.txt\" successfully!\n");
    return 0;
}

