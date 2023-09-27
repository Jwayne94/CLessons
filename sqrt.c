#include <math.h>
#include <stdio.h>

int main()
{
    double x;

    printf("sqrt(x)\n");
    printf("Input x: ");
    scanf("%lf", &x);

    double sqrt_x = sqrt(x);
    printf("sqrt(%.4lf) = %.4lf\n", x, sqrt_x);

    return 0;
}