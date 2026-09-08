/*
Search in a sorted array using binary search.
*/

#include <stdio.h>

int main()
{
    int n, i, key;
    int low, high, mid;

    scanf("%d", &n);

    int arr[n];

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &key);

    low = 0;
    high = n - 1;

    while(low <= high)
    {
        mid = (low + high) / 2;

        if(arr[mid] == key)
        {
            printf("Found at index %d\n", mid);
            return 0;
        }
        else if(key < arr[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    printf("-1\n");

    return 0;
}