/*
Q101 (Logic Enhancers)
Find the first and last occurrence of a target in a sorted array.
*/

#include <stdio.h>

int main()
{
    int n, i, target, first = -1, last = -1, arr[100];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    scanf("%d", &target);

    for (i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            if (first == -1)
                first = i;
            last = i;
        }
    }

    printf("%d,%d", first, last);
    return 0;
}
