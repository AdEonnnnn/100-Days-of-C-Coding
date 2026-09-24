/*
Q95 (Strings)
Check if one string is a rotation of another.
*/

#include <stdio.h>

int main()
{
    char first[100], second[100], combined[200];
    int i, j, length = 0, secondLength = 0, equal = 0;

    fgets(first, sizeof(first), stdin);
    fgets(second, sizeof(second), stdin);

    while (first[length] != '\0' && first[length] != '\n')
        length++;

    while (second[secondLength] != '\0' && second[secondLength] != '\n')
        secondLength++;

    if (length == secondLength)
    {
        for (i = 0; i < secondLength; i++)
            combined[i] = second[i];
        for (i = 0; i < secondLength; i++)
            combined[secondLength + i] = second[i];
        combined[secondLength + secondLength] = '\0';

        for (i = 0; i < secondLength; i++)
        {
            j = 0;
            while (j < length && combined[i + j] == first[j])
                j++;
            if (j == length)
            {
                equal = 1;
                break;
            }
        }
    }

    if (equal == 1)
        printf("Rotation");
    else
        printf("Not rotation");

    return 0;
}
