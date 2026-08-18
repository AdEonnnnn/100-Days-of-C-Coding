#include <stdio.h>
#include <math.h>

int main(void) {
    double a, b, c;
    double discriminant, root1, root2;
    const double EPSILON = 1e-9;

    scanf("%lf %lf %lf", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    if (discriminant > EPSILON) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);

        printf("Roots are real and different: %g, %g\n", root1, root2);
    } else if (fabs(discriminant) <= EPSILON) {
        root1 = -b / (2 * a);

        printf("Roots are real and same: %g\n", root1);
    } else {
        printf("Roots are complex\n");
    }

    return 0;
}