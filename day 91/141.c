/*
Q141 (Enum)
Define a structure Student with name, roll_no, and marks, then read and print one student's data.
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
    struct Student student;

    scanf("%s", student.name);
    scanf("%d", &student.rollNo);
    scanf("%d", &student.marks);

    printf("Name: %s | Roll: %d | Marks: %d",
           student.name, student.rollNo, student.marks);

    return 0;
}
