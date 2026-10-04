/*
Q106 (Logic Enhancers)
Print the next greater element for each array element.
*/

#include <stdio.h>

int main()
{
    int n, i, j, next, arr[100];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (i = 0; i < n; i++)
    {
        next = -1;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] > arr[i])
            {
                next = arr[j];
                break;
            }
        }
        if (i > 0)
            printf(", ");
        printf("%d", next);
    }
    return 0;
}
