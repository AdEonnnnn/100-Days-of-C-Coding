/*
Q105 (Logic Enhancers)
Print the majority element if one exists.
*/

#include <stdio.h>

int main()
{
    int n, i, j, count, majority = -1, arr[100];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (i = 0; i < n; i++)
    {
        count = 0;
        for (j = 0; j < n; j++)
        {
            if (arr[j] == arr[i])
                count++;
        }
        if (count > n / 2)
        {
            majority = arr[i];
            break;
        }
    }

    printf("%d", majority);
    return 0;
}
