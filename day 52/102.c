/*
Q102 (Logic Enhancers)
Find the index of the smallest element greater than or equal to x.
*/

#include <stdio.h>

int main()
{
    int n, i, x, arr[100], index = -1;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    scanf("%d", &x);

    for (i = 0; i < n; i++)
    {
        if (arr[i] >= x)
        {
            index = i;
            break;
        }
    }

    printf("%d", index);
    return 0;
}
