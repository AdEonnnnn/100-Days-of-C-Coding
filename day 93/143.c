/*
Q143 (Enum)
Find and print the student with the highest marks.
*/

#include <stdio.h>

struct Student
{
    char name[50];
    int rollNo;
    int marks;
};

int main()
{
    struct Student students[100], topper;
    int i, n;

    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%s %d %d", students[i].name,
              &students[i].rollNo, &students[i].marks);

    topper = students[0];
    for (i = 1; i < n; i++)
    {
        if (students[i].marks > topper.marks)
            topper = students[i];
    }

    printf("Topper: %s (Marks: %d)", topper.name, topper.marks);

    return 0;
}
