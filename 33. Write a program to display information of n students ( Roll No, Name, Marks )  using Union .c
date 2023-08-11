//33.Write a program to display information of n students ( Roll No, Name, Marks )  using Union  
#include <stdio.h>

union student {
    int roll_no;
    char name[100];
    float marks;
};

int main() {
    int n;
    printf("Enter No. Students: ");
    scanf("%d", &n);

    union student s[n];
	int i;
    for (i = 0; i < n; i++) {
        printf("Enter student %d Roll No., name, Marks: ", i+1);
        scanf("%d",&s[i].roll_no);
        scanf("%c",&s[i].name);
        scanf("%f",&s[i].marks);
    }

    for (i = 0; i < n; i++) {
        printf("\nStudent %d details:\n", i+1);
        printf("Roll no.: %d\n", s[i].roll_no);
        printf("Name: %s\n", s[i].name);
        printf("Marks: %.2f\n", s[i].marks);
    }

    return 0;
}

