#include <stdio.h>
int main()
{
    int a = 2147483647;
    int b = a+1;

    printf("Пример переполнения при int %d+1:\n%d\n", a, b);
    printf("Потеря значимости: \n%d\n", b - a);

    float c = 3.40282347e38;  // Максимальное значение для float
    float d = c + 10.0;       // Увеличение на 1

    printf("Пример переполнения при float %f + 1.0:\n%f\n", c, d);
    printf("Потеря значимости:\n%f\n", d - c);

    double e = 1.7976931348623157e308;  // Максимальное значение для double
    double f = e + 10.0;

    printf("Пример переполнения при double %e + 1.0:\n%e\n", e, f);
    printf("Потеря значимости: %e\n", f - e);

    return 0;
}