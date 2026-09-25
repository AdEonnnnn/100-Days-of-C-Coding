/*
Q97 (Strings)
Print the initials of a name.
*/

#include <stdio.h>

int main()
{
    char name[100];
    int i, printInitial = 1;

    fgets(name, sizeof(name), stdin);

    for (i = 0; name[i] != '\0' && name[i] != '\n'; i++)
    {
        if (printInitial == 1 && name[i] != ' ')
        {
            printf("%c.", name[i]);
            printInitial = 0;
        }
        if (name[i] == ' ')
            printInitial = 1;
    }

    return 0;
}
