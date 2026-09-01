#include <stdio.h>

int main(void) {
    float celsius, fahrenheit;

    scanf("%f", &celsius);

    fahrenheit = (celsius * 9.0 / 5.0) + 32;

    printf("Fahrenheit=%.2f\n", fahrenheit);

    return 0;
}