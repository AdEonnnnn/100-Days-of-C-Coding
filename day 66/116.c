/*
Q116 (Logic Enhancers)
Find two indices whose values add up to the target.
*/

#include <stdio.h>

int main()
{
    int n, target, i, j, arr[100], found = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    scanf("%d", &target);

    for (i = 0; i < n && found == 0; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                printf("%d %d", i, j);
                found = 1;
                break;
            }
        }
    }
    if (found == 0)
        printf("-1 -1");
    return 0;
}
