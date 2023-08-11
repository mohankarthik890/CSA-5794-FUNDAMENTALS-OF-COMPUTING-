#include <stdio.h>
#define MAX_STUDENTS 100

struct Student {
    int roll_no;
    char name[50];
    float marks;
};
int main() {
    struct Student students[MAX_STUDENTS];
    int n, i;
    printf("Enter number of students: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("Enter student %d roll no., name, marks: ", i+1);
        scanf("%d %s %f", &students[i].roll_no, students[i].name, &students[i].marks);
    }
    for (i = 0; i < n; i++) {
        printf("Student %d details:\n", i+1);
        printf("Roll no.: %d\n", students[i].roll_no);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
    }
    return 0;
}

