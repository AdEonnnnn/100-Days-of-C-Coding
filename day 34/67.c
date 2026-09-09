/*
Write a program to insert an element in an array at a given position.
*/

#include <stdio.h>

int main()
{
    int n, i, element, position;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n + 1];

    printf("Enter the array elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &element);

    printf("Enter the position: ");
    scanf("%d", &position);

    for(i = n; i >= position; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[position - 1] = element;
    n++;

    printf("Array after insertion:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}