/*
Q120 (File Handling)
Change a string input to sentence case.
*/

#include <stdio.h>

int main()
{
    char str[200];
    int i;
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0' && str[i] != '\n'; i++)
    {
        if (i == 0 || str[i - 1] == ' ')
        {
            if (str[i] >= 'a' && str[i] <= 'z')
                str[i] = str[i] - 'a' + 'A';
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] - 'A' + 'a';
    }

    printf("%s", str);
    return 0;
}
