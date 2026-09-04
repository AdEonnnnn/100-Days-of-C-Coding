/*
Write a program to find the digit that occurs the most times
in an integer number.
*/

#include <stdio.h>

int main()
{
    long long n;
    int digit, i, maxDigit = 0;
    int count[10] = {0};

    printf("Enter an integer number: ");
    scanf("%lld", &n);

    while(n != 0)
    {
        digit = n % 10;
        count[digit]++;
        n = n / 10;
    }

    for(i = 1; i < 10; i++)
    {
        if(count[i] > count[maxDigit])
        {
            maxDigit = i;
        }
    }

    printf("Most occurring digit = %d\n", maxDigit);
    printf("Number of occurrences = %d\n", count[maxDigit]);

    return 0;
}