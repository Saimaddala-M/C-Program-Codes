#include <stdio.h>

struct Student
{
    char name[50];
    int roll;
    int marks[3];
    int total;
    float percentage;
};

int main()
{
    struct Student s;
    int i;

    printf("Enter student name: ");
    fgets(s.name, sizeof(s.name), stdin);

    printf("Enter roll number: ");
    scanf("%d", &s.roll);

    printf("Enter marks in 3 subjects:\n");
    for (i = 0; i < 3; i++)
    {
        printf("Subject %d: ", i + 1);
        scanf("%d", &s.marks[i]);
    }
    s.total = 0;
    for (i = 0; i < 3; i++)
    {
        s.total += s.marks[i];
    }

      s.percentage = (s.total / 300.0) * 100;

    printf("\n----- Student Information -----\n");
    printf("Name       : %s", s.name);
    printf("Roll No    : %d\n", s.roll);
    printf("Marks      : %d, %d, %d\n",
           s.marks[0], s.marks[1], s.marks[2]);
    printf("Total Marks: %d\n", s.total);
    printf("Percentage : %.2f%%\n", s.percentage);

    return 0;
}
