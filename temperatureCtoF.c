#include <stdio.h>
int main()
{
double C, F; //целые числа не дают достаточной точности, поэтому будут числа с плавающей точкой

printf("Input temperature value (°C): ");
scanf("%lf", &C);

F = (C * 9 / 5) + 32;

printf("%.4lf градусов Цельсия рано %.4lf градусам Фаренгейта.\n", C, F);
return 0;
}
