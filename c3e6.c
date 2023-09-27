#include <stdio.h>

int main()
{
    float
    molmass = 3.0e-23, //масса молекулы в граммах
    quart = 950; //масса кварты в граммах
    float value, totalmol; //количество кварт, общее количество молекул

    printf("Ввести объем воды в квартах:\t");
    scanf("%f", &value);

    totalmol = (quart * value) / molmass;

    printf("В данном объеме воды содержится %e молекул\n", totalmol);

    return 0;

}