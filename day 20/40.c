/*
Write a program to find the 1's complement of a binary number and print it.
*/

#include <stdio.h>

int main()
{
    long long n, digit, place = 1, complement = 0;

    printf("Enter a binary number: ");
    scanf("%lld", &n);

    while(n != 0)
    {
        digit = n % 10;

        if(digit == 0)
            digit = 1;
        else
            digit = 0;

        complement = complement + digit * place;
        place = place * 10;
        n = n / 10;
    }

    printf("1's complement = %lld\n", complement);

    return 0;
}