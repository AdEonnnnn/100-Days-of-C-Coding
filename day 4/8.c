#include <stdio.h>

int main(void) {
    int n;
    long long sum;

    printf("Enter n: ");
    scanf("%d", &n);

    sum = (long long)n * (n + 1) / 2;

    printf("Sum of the first %d natural numbers = %lld\n", n, sum);

    return 0;
}