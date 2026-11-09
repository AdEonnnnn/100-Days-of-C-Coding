/*
Q137 (Enum)
Create an enum for user roles and display messages based on role.
*/

#include <stdio.h>

enum Role
{
    ADMIN,
    USER,
    GUEST
};

int main()
{
    char input[20];
    enum Role role;
    scanf("%s", input);

    if (input[0] == 'A')
        role = ADMIN;
    else if (input[0] == 'U')
        role = USER;
    else
        role = GUEST;

    if (role == ADMIN)
        printf("Welcome Admin!");
    else if (role == USER)
        printf("Welcome User!");
    else
        printf("Welcome Guest!");

    return 0;
}
