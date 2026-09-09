/*
Write a program to delete an element from an array.
*/

#include <stdio.h>

int main()
{
    int n, i, element, position = -1;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the array elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to delete: ");
    scanf("%d", &element);

    for(i = 0; i < n; i++)
    {
        if(arr[i] == element)
        {
            position = i;
            break;
        }
    }

    if(position == -1)
    {
        printf("Element not found.\n");
    }
    else
    {
        for(i = position; i < n - 1; i++)
        {
            arr[i] = arr[i + 1];
        }

        n--;

        printf("Array after deletion:\n");

        for(i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}