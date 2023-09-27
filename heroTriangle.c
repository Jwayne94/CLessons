#include <math.h>
#include <stdio.h>


double calculateTriangleArea(double a, double b, double c)  // Объявление функции для вычисления площади треугольника
{
    double p = (a + b + c) * 0.5;
    double s = sqrt(p * (p - a) * (p - b) * (p - c));
    return s;
}

int main()
{
    double a, b, c, p;

    printf("Введите длинну сторон треугольника.\nСторона A: ");
    scanf("%lf", &a);

    printf("Сторона B: ");
    scanf("%lf", &b);

    printf("Сторона C: ");
    scanf("%lf", &c);

    if (a < (b + c) && b < (a + c) && c < (a + b) && a > 0 && b > 0 && c > 0)
    {
        // Вызов функции для вычисления площади 
        double s = calculateTriangleArea(a, b, c);
        printf("Площадь треугольника = %.4lf\n", s);
    }
    else
    {
        printf("Ошибка!!! Эти стороны не могут образовать треугольник!!!\nПопробуйте еще раз!\n");
    }

    return 0;
    
}