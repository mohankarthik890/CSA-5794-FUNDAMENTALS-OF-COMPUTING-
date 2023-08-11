//31. Write a program to store information of n students ( Roll No, Name, Marks )  in Union and display it. 
#include <stdio.h>
#include <stdlib.h>

union student_info {
    int roll_no;
    char name[100];
    float marks;
};

int main() {
    int n, i;
    printf("Enter No. of Students: ");
    scanf("%d", &n);

    union student_info student[n];

    for (i = 0; i < n; i++) {
        printf("Enter student %d Roll No., name, Marks: ", i+1);
        scanf("%d %c %f", &student[i].roll_no, student[i].name, &student[i].marks);
    }

    for (i = 0; i < n; i++) {
        printf("Student %d details:\n", i+1);
        printf("Roll no.: %d\n", student[i].roll_no);
        printf("Name: %c\n", student[i].name);
        printf("Marks: %.2f\n", student[i].marks);
    }

    return 0;
}

