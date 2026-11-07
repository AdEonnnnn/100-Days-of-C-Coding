/*
Q134 (Enum)
Define an enum with SUCCESS, FAILURE, and TIMEOUT and print messages accordingly.
*/

#include <stdio.h>

enum Status
{
    SUCCESS,
    FAILURE,
    TIMEOUT
};

int main()
{
    char input[20];
    enum Status status;
    scanf("%s", input);

    if (input[0] == 'S')
        status = SUCCESS;
    else if (input[0] == 'F')
        status = FAILURE;
    else
        status = TIMEOUT;

    if (status == SUCCESS)
        printf("Operation successful");
    else if (status == FAILURE)
        printf("Operation failed");
    else
        printf("Operation timed out");

    return 0;
}
