#include <stdio.h>

int main()
{
    float inch = 2.54;
    float cm;

    printf("Введите свой рост в см:\t");
    scanf("%f", &cm);

    printf("Ваш рост %.1f будет ранятся %.2f дюймам\n", cm, cm / inch);

    return 0;
}