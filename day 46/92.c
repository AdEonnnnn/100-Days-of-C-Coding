/*
Q92 (Strings)
Find the first repeating lowercase alphabet in a string.
*/

#include <stdio.h>

int main()
{
    char str[100];
    int i, j, found = 0;

    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0' && str[i] != '\n'; i++)
    {
        for (j = i + 1; str[j] != '\0' && str[j] != '\n'; j++)
        {
            if (str[i] == str[j])
            {
                if (str[i] >= 'a' && str[i] <= 'z')
                {
                    printf("%c", str[i]);
                    found = 1;
                }
                break;
            }
        }
        if (found == 1)
            break;
    }

    return 0;
}
