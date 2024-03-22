/*
Write a C Program to create the data for some students (roll, name, mark1, mark2, mark3) and then find the total marks for each student and average mark of each student
*/
#include <stdio.h>

// Define a structure for student data
struct Student {
    int roll;
    char name[50];
    float mark1, mark2, mark3;
};

int main() {
    int numOfStudents;
    printf("Enter the number of students: ");
    scanf("%d", &numOfStudents);

    // Declare an array of structures to store student data
    struct Student students[numOfStudents];

    // Input phase: Read data for each student
    for (int i = 0; i < numOfStudents; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Roll number: ");
        scanf("%d", &students[i].roll);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Marks in three subjects: ");
        scanf("%f %f %f", &students[i].mark1, &students[i].mark2, &students[i].mark3);
    }

    // Calculation phase: Calculate total marks and average marks for each student
    printf("\nResults:\n");
    for (int i = 0; i < numOfStudents; i++) {
        float total_marks = students[i].mark1 + students[i].mark2 + students[i].mark3;
        float average_marks = total_marks / 3;
        printf("\nStudent %d:\n", i + 1);
        printf("Roll number: %d\n", students[i].roll);
        printf("Name: %s\n", students[i].name);
        printf("Total marks: %.2f\n", total_marks);
        printf("Average marks: %.2f\n", average_marks);
    }

    return 0;
}
