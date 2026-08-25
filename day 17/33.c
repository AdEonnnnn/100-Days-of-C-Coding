/*
Write a program to check if a number is an Armstrong number.
*/

#include <stdio.h>
#include <math.h>

int main() {
    int num, original, rem, digits = 0;
    int sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    // Count the number of digits
    while (original != 0) {
        digits++;
        original /= 10;
    }

    original = num;

    // Calculate sum of digits raised to the power of number of digits
    while (original != 0) {
        rem = original % 10;
        sum += pow(rem, digits);
        original /= 10;
    }

    if (sum == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}