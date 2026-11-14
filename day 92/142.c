/*
Q142 (Enum)
Store details of 5 students in an array of structures and print all.
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
    struct Student students[5];
    int i;

    for (i = 0; i < 5; i++)
        scanf("%s %d %d", students[i].name,
              &students[i].rollNo, &students[i].marks);

    for (i = 0; i < 5; i++)
        printf("Name: %s | Roll: %d | Marks: %d\n",
               students[i].name, students[i].rollNo, students[i].marks);

    return 0;
}
