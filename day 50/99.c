/*
Q99 (Strings)
Change the date format from dd/04/yyyy to dd-Apr-yyyy.
*/

#include <stdio.h>

int main()
{
    char date[20];
    int day[3], i, value = 0, monthNumber;
    char months[12][4] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun",
                          "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};

    fgets(date, sizeof(date), stdin);

    i = 0;
    value = 0;
    while (date[i] >= '0' && date[i] <= '9')
    {
        value = value * 10 + (date[i] - '0');
        i++;
    }
    day[0] = value;

    i++;
    value = 0;
    while (date[i] >= '0' && date[i] <= '9')
    {
        value = value * 10 + (date[i] - '0');
        i++;
    }
    day[1] = value;
    monthNumber = day[1];

    i++;
    value = 0;
    while (date[i] >= '0' && date[i] <= '9')
    {
        value = value * 10 + (date[i] - '0');
        i++;
    }
    day[2] = value;

    printf("%02d-", day[0]);
    if (monthNumber >= 1 && monthNumber <= 12)
        printf("%s", months[monthNumber - 1]);
    else
        printf("Invalid");
    printf("-%04d", day[2]);

    return 0;
}
