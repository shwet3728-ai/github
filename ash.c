#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ENUM for grade
typedef enum {
    FAIL,
    PASS,
    DISTINCTION
} Grade;

// STRUCT for student
typedef struct {
    int id;
    char name[50];
    float marks;
    Grade grade;
} Student;

// Function to assign grade based on marks
void assignGrade(Student *s) {
    if (s->marks < 40)
        s->grade = FAIL;
    else if (s->marks < 75)
        s->grade = PASS;
    else
        s->grade = DISTINCTION;
}

// Function to print student details
void printStudent(Student *s) {
    char *gradeStr;

    switch (s->grade) {
        case FAIL: gradeStr = "FAIL"; break;
        case PASS: gradeStr = "PASS"; break;
        case DISTINCTION: gradeStr = "DISTINCTION"; break;
    }

    printf("ID: %d\n", s->id);
    printf("Name: %s\n", s->name);
    printf("Marks: %.2f\n", s->marks);
    printf("Grade: %s\n", gradeStr);
    printf("----------------------\n");
}

int main() {
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    // Dynamic memory allocation using pointer
    Student *students = (Student *)malloc(n * sizeof(Student));

    // Input student data
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for student %d\n", i + 1);

        printf("ID: ");
        scanf("%d", &students[i].id);

        printf("Name: ");
        scanf("%s", students[i].name);

        printf("Marks: ");
        scanf("%f", &students[i].marks);

        // Assign grade using pointer
        assignGrade(&students[i]);
    }

    // Print all students
    printf("\n--- Student Records ---\n");
    for (int i = 0; i < n; i++) {
        printStudent(&students[i]);
    }

    // Free allocated memory
    free(students);

    return 0;
}