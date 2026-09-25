/*
Q96 (Strings)
Reverse each word in a sentence without changing the word order.
*/

#include <stdio.h>

int main()
{
    char str[200];
    int i, start, end;

    fgets(str, sizeof(str), stdin);

    i = 0;
    while (str[i] != '\0' && str[i] != '\n')
    {
        start = i;
        while (str[i] != '\0' && str[i] != '\n' && str[i] != ' ')
            i++;
        end = i - 1;

        while (end >= start)
        {
            printf("%c", str[end]);
            end--;
        }

        if (str[i] == ' ')
        {
            printf(" ");
            i++;
        }
    }

    return 0;
}
