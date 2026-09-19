/*
Q90 (Strings)
Toggle case of each character in a string.
*/

#include <stdio.h>

int main()
{
    char str[100];
    int i;

    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0' && str[i] != '\n'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 'a' + 'A';
        else if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] - 'A' + 'a';

        printf("%c", str[i]);
    }

    return 0;
}
