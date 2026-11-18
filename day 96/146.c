/*
Q146 (Enum)
Create Employee structure with nested Date structure for joining date and print details.
*/

#include <stdio.h>

struct Date
{
    int day;
    int month;
    int year;
};

struct Employee
{
    char name[50];
    int id;
    struct Date joiningDate;
};

int main()
{
    struct Employee employee;

    scanf("%s %d %d %d %d", employee.name, &employee.id,
          &employee.joiningDate.day, &employee.joiningDate.month,
          &employee.joiningDate.year);

    printf("Name: %s | ID: %d | Joining Date: %02d/%02d/%04d",
           employee.name, employee.id, employee.joiningDate.day,
           employee.joiningDate.month, employee.joiningDate.year);

    return 0;
}
