/*
Q100 (Strings)
Print all sub-strings of a string.
*/

#include <stdio.h>

int main()
{
    char str[100];
    int i, j, k, length = 0, first = 1;

    fgets(str, sizeof(str), stdin);

    while (str[length] != '\0' && str[length] != '\n')
        length++;

    for (i = 0; i < length; i++)
    {
        for (j = i; j < length; j++)
        {
            if (first == 0)
                printf(",");

            for (k = i; k <= j; k++)
                printf("%c", str[k]);

            first = 0;
        }
    }

    return 0;
}
