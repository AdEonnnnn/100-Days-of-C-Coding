/*
Q117 (Logic Enhancers)
Merge two sorted arrays into one sorted array.
*/

#include <stdio.h>

int main()
{
    int m, n, i = 0, j = 0, k = 0, a[100], b[100], merged[200];
    scanf("%d", &m);
    for (i = 0; i < m; i++)
        scanf("%d", &a[i]);
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &b[i]);

    i = 0;
    while (i < m && j < n)
    {
        if (a[i] <= b[j])
            merged[k++] = a[i++];
        else
            merged[k++] = b[j++];
    }
    while (i < m)
        merged[k++] = a[i++];
    while (j < n)
        merged[k++] = b[j++];

    for (i = 0; i < k; i++)
    {
        if (i > 0)
            printf(" ");
        printf("%d", merged[i]);
    }
    return 0;
}
