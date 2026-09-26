/*
Q98 (Strings)
Print initials of a name with the surname displayed in full.
*/

#include <stdio.h>

int main()
{
    char name[100];
    int i, words = 0, j;
    int start[20], end[20];

    fgets(name, sizeof(name), stdin);

    i = 0;
    while (name[i] != '\0' && name[i] != '\n')
    {
        if (name[i] != ' ' && (i == 0 || name[i - 1] == ' '))
        {
            start[words] = i;
            j = i;
            while (name[j] != '\0' && name[j] != '\n' && name[j] != ' ')
                j++;
            end[words] = j - 1;
            words++;
            i = j;
        }
        else
        {
            i++;
        }
    }

    if (words > 0)
    {
        for (i = 0; i < words - 1; i++)
        {
            printf("%c.", name[start[i]]);
        }

        printf(" ");
        for (i = start[words - 1]; i <= end[words - 1]; i++)
            printf("%c", name[i]);
    }

    return 0;
}
