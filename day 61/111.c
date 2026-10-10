/*
Q111 (Logic Enhancers)
Print the first negative integer in every subarray of size k.
*/

#include <stdio.h>

int main()
{
    int n, k, i, j, firstNegative, arr[100];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    scanf("%d", &k);

    for (i = 0; i <= n - k; i++)
    {
        firstNegative = 0;
        for (j = i; j < i + k; j++)
        {
            if (arr[j] < 0)
            {
                firstNegative = arr[j];
                break;
            }
        }
        if (i > 0)
            printf(" ");
        printf("%d", firstNegative);
    }
    return 0;
}
