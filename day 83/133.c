/*
Q133 (Enum)
Create an enum for months and print how many days each month has.
*/

#include <stdio.h>

enum Month
{
    JAN,
    FEB,
    MAR,
    APR,
    MAY,
    JUN,
    JUL,
    AUG,
    SEP,
    OCT,
    NOV,
    DEC
};

int main()
{
    char input[10];
    enum Month month;
    scanf("%s", input);

    if (input[0] == 'F')
        month = FEB;
    else
        month = JAN;

    if (month == FEB)
        printf("28 or 29 days");
    else if (month == APR || month == JUN || month == SEP || month == NOV)
        printf("30 days");
    else
        printf("31 days");

    return 0;
}
