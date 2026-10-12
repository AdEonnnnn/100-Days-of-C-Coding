/*
Q114 (Logic Enhancers)
Find the length of the longest substring without repeating characters.
*/

#include <stdio.h>

int main()
{
    char str[100];
    int i, j, k, length = 0, longest = 0, currentLength;
    fgets(str, sizeof(str), stdin);
    while (str[length] != '\0' && str[length] != '\n')
        length++;

    for (i = 0; i < length; i++)
    {
        currentLength = 0;
        for (j = i; j < length; j++)
        {
            k = i;
            for (k = i; k < j; k++)
            {
                if (str[k] == str[j])
                    break;
            }
            if (k < j)
                break;
            currentLength++;
        }
        if (currentLength > longest)
            longest = currentLength;
    }

    printf("%d", longest);
    return 0;
}
