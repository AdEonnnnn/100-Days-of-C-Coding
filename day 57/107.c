/*
Q107 (Logic Enhancers)
Print the previous greater element for each array element.
*/

#include <stdio.h>

int main()
{
    int n, i, j, previous, arr[100];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (i = 0; i < n; i++)
    {
        previous = -1;
        for (j = i - 1; j >= 0; j--)
        {
            if (arr[j] > arr[i])
            {
                previous = arr[j];
                break;
            }
        }
        if (i > 0)
            printf(", ");
        printf("%d", previous);
    }
    return 0;
}
