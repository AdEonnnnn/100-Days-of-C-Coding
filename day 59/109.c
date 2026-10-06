/*
Q109 (Logic Enhancers)
Find the maximum sum of a subarray of size k.
*/

#include <stdio.h>

int main()
{
    int n, k, i, j, sum, maximum, arr[100];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    scanf("%d", &k);

    maximum = -2147483647;
    for (i = 0; i <= n - k; i++)
    {
        sum = 0;
        for (j = i; j < i + k; j++)
            sum += arr[j];
        if (sum > maximum)
            maximum = sum;
    }

    printf("%d", maximum);
    return 0;
}
