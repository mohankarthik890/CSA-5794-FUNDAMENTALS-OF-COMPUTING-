//28. Write a program to input and print student data using pointer object of structure.
#include <stdio.h>
struct student {
    int roll_no;
    char name[50];
    float marks;
};
int main() {
    struct student s, *ptr;
    ptr = &s;
    printf("Enter student Roll No.: ");
    scanf("%d", &ptr->roll_no);
    printf("Enter student Name: ");
    scanf("%s", ptr->name);
    printf("Enter student Marks: ");
    scanf("%f", &ptr->marks);
    printf("\nStudent details:\n");
    printf("Roll No.: %d\n", ptr->roll_no);
    printf("Name: %s\n", ptr->name);
    printf("Marks: %.2f\n", ptr->marks);
    return 0;
}

