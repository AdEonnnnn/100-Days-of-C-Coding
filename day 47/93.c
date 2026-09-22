/*
Q93 (Strings)
Check if two strings are anagrams of each other.
*/

#include <stdio.h>

int main()
{
    char first[100], second[100];
    int i, j, matched, anagrams = 1;

    fgets(first, sizeof(first), stdin);
    fgets(second, sizeof(second), stdin);

    i = 0;
    while (first[i] != '\0' && first[i] != '\n')
        i++;
    j = 0;
    while (second[j] != '\0' && second[j] != '\n')
        j++;

    if (i != j)
    {
        anagrams = 0;
    }
    else
    {
        for (i = 0; first[i] != '\0' && first[i] != '\n'; i++)
        {
            matched = 0;
            for (j = 0; second[j] != '\0' && second[j] != '\n'; j++)
            {
                if (first[i] == second[j])
                {
                    second[j] = ' ';
                    matched = 1;
                    break;
                }
            }
            if (matched == 0)
            {
                anagrams = 0;
                break;
            }
        }
    }

    if (anagrams == 1)
        printf("Anagrams");
    else
        printf("Not anagrams");

    return 0;
}
