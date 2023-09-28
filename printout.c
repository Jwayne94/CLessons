/* printout.c — использует спецификаторы преобразования */
#include <stdio.h>
#define PI 3.141593
void main()
{
    int number = 7;
    float pies = 12.75;
    int cost = 7800;

    printf("%d участников съели %f пирожков c вишней.\n", number, pies);
    printf("Значение pi равно %f.\n", PI);
    printf("До свидания! Ваше искусство слишком дороо обходится,\n");
    printf("%c%d\n", '$', 2 * cost);

    return 0;
}