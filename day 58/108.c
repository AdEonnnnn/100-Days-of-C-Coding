/*
Q108 (Logic Enhancers)
Print the product of all array elements except the current element.
*/

#include <stdio.h>

int main()
{
    int n, i, j, product, arr[100];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("[");
    for (i = 0; i < n; i++)
    {
        product = 1;
        for (j = 0; j < n; j++)
        {
            if (j != i)
                product *= arr[j];
        }
        if (i > 0)
            printf(",");
        printf("%d", product);
    }
    printf("]");
    return 0;
}
