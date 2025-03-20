#include <stdio.h>

#define SUBJECTS 3
#define TESTS 4

int main() {
    // Array to store marks for each subject and each test
    int marks[SUBJECTS][TESTS];
    float subject_average[SUBJECTS];
    float overall_average = 0.0;

    char subjects[SUBJECTS][20] = {"Physics", "Chemistry", "Math"};
    char test_names[TESTS][20] = {"Assignment", "Course work", "Mid term", "End term"};

    for (int i = 0; i < SUBJECTS; i++) {
        printf("\nEnter the marks for %s:\n", subjects[i]);

        int total_marks = 0;

        for (int j = 0; j < TESTS; j++) {
            printf("Enter marks for %s: ", test_names[j]);
            scanf("%d", &marks[i][j]);

            total_marks += marks[i][j];
        }
        subject_average[i] = total_marks / (float)TESTS;
        printf("Average marks in %s: %.2f\n", subjects[i], subject_average[i]);

        overall_average += subject_average[i];
    }

    overall_average /= SUBJECTS;
    printf("\nOverall average of marks: %.2f\n", overall_average);

    return 0;
}
