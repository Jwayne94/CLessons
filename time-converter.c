#include <stdio.h>

int main ()
{
    int s, m, h, d;

    printf("Ввести количество секунд: ");
    scanf("%d", &s);

    // Рассчитать дни
    d = s / (60 * 60 * 24);
    s = s % (60 * 60 * 24); //оставшиеся секунды для дальнейших вычислений

    // Рассчитать часы
    h = s / (60 * 60);
    s = s % (60 * 60);

    // Рассчитать минуты
    m = s / 60;
    s = s % 60;             // Остаток секунд

    printf("%dd %dh %dm %ds\n", d, h, m, s);
    return 0;
}