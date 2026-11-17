/*
Q145 (Enum)
Return a structure containing top student's details from a function.
*/

#include <stdio.h>

struct Student
{
    char name[50];
    int rollNo;
    int marks;
};

struct Student findTopper(struct Student students[], int n)
{
    struct Student topper;
    int i;

    topper = students[0];
    for (i = 1; i < n; i++)
    {
        if (students[i].marks > topper.marks)
            topper = students[i];
    }

    return topper;
}

int main()
{
    struct Student students[100], topper;
    int i, n;

    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%s %d %d", students[i].name,
              &students[i].rollNo, &students[i].marks);

    topper = findTopper(students, n);
    printf("Top Student: %s | Roll: %d | Marks: %d",
           topper.name, topper.rollNo, topper.marks);

    return 0;
}
