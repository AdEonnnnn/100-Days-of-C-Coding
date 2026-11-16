/*
Q144 (Enum)
Write a function that accepts a structure as parameter and prints its members.
*/

#include <stdio.h>

struct Student
{
    char name[50];
    int rollNo;
    int marks;
};

void printStudent(struct Student student)
{
    printf("Name: %s | Roll: %d | Marks: %d",
           student.name, student.rollNo, student.marks);
}

int main()
{
    struct Student student;

    scanf("%s %d %d", student.name,
          &student.rollNo, &student.marks);
    printStudent(student);

    return 0;
}
