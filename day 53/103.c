/*
Q103 (Logic Enhancers)
Find the leftmost pivot index in an array.
*/

#include <stdio.h>

int main()
{
    int n, i, arr[100], total = 0, left = 0, pivot = -1;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        total += arr[i];
    }

    for (i = 0; i < n; i++)
    {
        if (left == total - left - arr[i])
        {
            pivot = i;
            break;
        }
        left += arr[i];
    }

    printf("%d", pivot);
    return 0;
}
