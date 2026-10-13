/*
Q115 (Logic Enhancers)
Check whether two strings are valid anagrams.
*/

#include <stdio.h>

int main()
{
    char s[100], t[100];
    int i, j, sLength = 0, tLength = 0, matched, anagram = 1;
    fgets(s, sizeof(s), stdin);
    fgets(t, sizeof(t), stdin);

    while (s[sLength] != '\0' && s[sLength] != '\n')
        sLength++;
    while (t[tLength] != '\0' && t[tLength] != '\n')
        tLength++;

    if (sLength != tLength)
        anagram = 0;
    else
    {
        for (i = 0; i < sLength; i++)
        {
            matched = 0;
            for (j = 0; j < tLength; j++)
            {
                if (s[i] == t[j])
                {
                    t[j] = ' ';
                    matched = 1;
                    break;
                }
            }
            if (matched == 0)
            {
                anagram = 0;
                break;
            }
        }
    }

    if (anagram == 1)
        printf("Anagram");
    else
        printf("Not Anagram");
    return 0;
}
