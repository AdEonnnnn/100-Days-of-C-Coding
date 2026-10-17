/*
Q119 (Logic Enhancers)
Find the repeated element in one iteration.
*/

#include <stdio.h>

int main()
{
    int n, i, arr[100], count[1000] = {0};
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (i = 0; i < n; i++)
    {
        count[arr[i]]++;
    }
    for (i = 0; i < 1000; i++)
    {
        if (count[i] > 1)
        {
            printf("%d", i);
            break;
        }
    }
    return 0;
}
