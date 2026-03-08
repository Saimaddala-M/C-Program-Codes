#include <stdio.h>

int main()
{
    int marks;

    printf("Enter the student's marks: ");
    scanf("%d", &marks);

    if (marks >= 93 && marks <= 100)
        printf("Grade: O\nGrade Points: 10\n");

    else if (marks >= 85 && marks <= 92)
        printf("Grade: A+\nGrade Points: 9.5\n");

    else if (marks >= 78 && marks <= 84)
        printf("Grade: A\nGrade Points: 9\n");

    else if (marks >= 71 && marks <= 77)
        printf("Grade: B+\nGrade Points: 8\n");

    else if (marks >= 64 && marks <= 70)
        printf("Grade: B\nGrade Points: 7\n");

    else if (marks >= 57 && marks <= 63)
        printf("Grade: C\nGrade Points: 6\n");

    else if (marks >= 50 && marks <= 56)
        printf("Grade: P\nGrade Points: 5\n");

    else if (marks >= 0 && marks <= 49)
        printf("Grade: F\nGrade Points: 0\n");

    else
        printf("Invalid marks entered\n");

    return 0;
}
