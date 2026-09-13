/*
Write a program to rotate an array to the right by k positions.
*/

#include <stdio.h>

int main()
{
    int n, i, j, k, last;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the array elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the value of k: ");
    scanf("%d", &k);

    k = k % n;

    for(i = 0; i < k; i++)
    {
        last = arr[n - 1];

        for(j = n - 1; j > 0; j--)
        {
            arr[j] = arr[j - 1];
        }

        arr[0] = last;
    }

    printf("Array after right rotation:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}