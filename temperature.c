#include <stdio.h>
int main()
{
int fahr, celsius;
int lower, upper, step;

printf("Input upper and lower bound and step (°F): ");
scanf("%d %d %d", &upper, &lower, &step); // Ввод границ данных и шаг

fahr = upper;

printf(" °F\t°C \n");
while (fahr >= lower) 
{
    celsius = 5 * (fahr - 32) / 9;
    printf("%3d\t%-3d\n", fahr, celsius); // %3d : Число "3" означает минимальную ширину поля в выводе значения. Сделано для выравнивания значений. Знак минуса говорит о вырвнивании по левой стороне
    fahr -= step;
}

return 0;
}