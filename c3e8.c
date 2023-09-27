#include <stdio.h>

int main()
{
    float cups, pint, ounce, tabSpoons, teaSpoons;

    printf("Введите количество чашек: ");
    scanf("%f", &cups);

    printf("В данном объеме помещается следующее количество\nЧашек:\t\t%.2f\n", cups);
    pint = cups / 2;
    ounce = cups * 8;
    tabSpoons = ounce * 2;
    teaSpoons = tabSpoons * 3;

    printf("Пинт:\t\t%.2f\nУнций:\t\t%.2f\nСт.Ложек:\t%.2f\nЧ.Ложек:\t%.2f\n", pint, ounce, tabSpoons, teaSpoons);

    return 0;
}