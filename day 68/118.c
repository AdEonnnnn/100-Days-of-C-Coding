/*
Q118 (Logic Enhancers)
Find the missing number between 0 and n.
*/

#include <stdio.h>

int main()
{
    int n, i, expected, sum = 0, actual = 0, arr[100];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        actual += arr[i];
    }

    expected = n * (n + 1) / 2;
    sum = expected - actual;
    printf("%d", sum);
    return 0;
}
