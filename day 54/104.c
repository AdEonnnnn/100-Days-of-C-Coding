/*
Q104 (Logic Enhancers)
Find the pivot integer between 1 and n.
*/

#include <stdio.h>

int main()
{
    int n, i, total, pivot = -1;
    scanf("%d", &n);

    total = n * (n + 1) / 2;
    for (i = 1; i <= n; i++)
    {
        if (i * (i + 1) / 2 == total - i * (i - 1) / 2)
        {
            pivot = i;
            break;
        }
    }

    printf("%d", pivot);
    return 0;
}
