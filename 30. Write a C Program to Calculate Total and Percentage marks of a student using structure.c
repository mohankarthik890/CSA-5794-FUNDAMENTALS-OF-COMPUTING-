//30. Write a C Program to Calculate Total and Percentage marks of a student using structure.
#include <stdio.h>

struct Student {
    int rollno;
    char name[50];
    int marks[3];
};

int main() {
    struct Student s;
    float total = 0, per;
    int i;
    
    printf("Enter RollNo: ");
    scanf("%d", &s.rollno);
    
    printf("Name: ");
    scanf("%s", s.name);
    
    for (i = 0; i < 3; i++) {
        printf("Enter marks of subject %d: ", i+1);
        scanf("%d", &s.marks[i]);
        total += s.marks[i];
    }
    
    per = total / 3;
    
    printf("\nRoll No.: %d", s.rollno);
    printf("\nName: %s", s.name);
    printf("\nMarks: ");
    for (i = 0; i < 3; i++) {
        printf("%d ", s.marks[i]);
    }
    printf("\nTotal: %.2f", total);
    printf("\nPercentage: %.2f", per);
    
    return 0;
}

