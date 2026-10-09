/*
Q110 (Logic Enhancers)
Print maximum elements of every subarray of size k.
*/

#include <stdio.h>

int main()
{
    int n, k, i, j, maximum, arr[100];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    scanf("%d", &k);

    for (i = 0; i <= n - k; i++)
    {
        maximum = arr[i];
        for (j = i + 1; j < i + k; j++)
        {
            if (arr[j] > maximum)
                maximum = arr[j];
        }
        if (i > 0)
            printf(" ");
        printf("%d", maximum);
    }
    return 0;
}
