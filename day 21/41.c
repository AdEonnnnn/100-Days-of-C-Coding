/*
Write a program to swap the first and last digit of a number.
*/

#include <stdio.h>

int main()
{
    int n, first, last, temp, divisor = 1, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;
    last = n % 10;

    while(temp >= 10)
    {
        temp = temp / 10;
        divisor = divisor * 10;
    }

    first = temp;

    result = last * divisor
           + (n % divisor)
           - last
           + first;

    printf("Number after swapping = %d\n", result);

    return 0;
}