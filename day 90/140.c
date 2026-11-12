/*
Q140 (Enum)
Define a struct with enum Gender and print a person's gender.
*/

#include <stdio.h>

enum Gender
{
    MALE,
    FEMALE,
    OTHER
};

struct Person
{
    enum Gender gender;
};

int main()
{
    char input[20];
    struct Person person;
    scanf("%s", input);

    if (input[0] == 'M')
        person.gender = MALE;
    else if (input[0] == 'F')
        person.gender = FEMALE;
    else
        person.gender = OTHER;

    if (person.gender == MALE)
        printf("Male");
    else if (person.gender == FEMALE)
        printf("Female");
    else
        printf("Other");

    return 0;
}
