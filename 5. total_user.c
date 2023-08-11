#include <stdio.h>

int main() {
    int total_users, staff_users, non_teaching_staff, student_users;
    printf("Total Users: ");
    scanf("%d", &total_users);
    printf("Staff Users: ");
    scanf("%d", &staff_users);

    non_teaching_staff = staff_users / 3;
    student_users = total_users - staff_users - non_teaching_staff;

    printf("Student Users: %d", student_users);

    return 0;
}

