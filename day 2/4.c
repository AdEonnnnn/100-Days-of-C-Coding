#include <stdio.h>

int main(void) {
    float radius, area, circumference;
    const float PI = 3.14f;

    scanf("%f", &radius);

    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    printf("Area=%.2f, Circumference=%.2f\n", area, circumference);

    return 0;
}