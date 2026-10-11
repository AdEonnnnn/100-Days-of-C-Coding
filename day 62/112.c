/*
Q112 (Logic Enhancers)
Find the maximum sum of a contiguous subarray using Kadane's algorithm.
*/

#include <stdio.h>

int main()
{
    int n, i, arr[100], currentSum, maximumSum;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    currentSum = arr[0];
    maximumSum = arr[0];
    for (i = 1; i < n; i++)
    {
        if (currentSum + arr[i] > arr[i])
            currentSum = currentSum + arr[i];
        else
            currentSum = arr[i];

        if (currentSum > maximumSum)
            maximumSum = currentSum;
    }

    printf("%d", maximumSum);
    return 0;
}
