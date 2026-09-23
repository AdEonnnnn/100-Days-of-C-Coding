/*
Q94 (Strings)
Find the longest word in a sentence.
*/

#include <stdio.h>

int main()
{
    char str[200], longest[200], word[200];
    int i, j, k, wordLength, longestLength = 0;

    fgets(str, sizeof(str), stdin);

    i = 0;
    while (str[i] != '\0' && str[i] != '\n')
    {
        j = i;
        k = 0;

        while (str[j] != '\0' && str[j] != '\n' && str[j] != ' ')
        {
            word[k] = str[j];
            k++;
            j++;
        }
        word[k] = '\0';
        wordLength = k;

        if (wordLength > longestLength)
        {
            longestLength = wordLength;
            for (k = 0; k < wordLength; k++)
                longest[k] = word[k];
            longest[wordLength] = '\0';
        }

        i = j;
        if (str[i] == ' ')
            i++;
    }

    printf("%s", longest);

    return 0;
}
