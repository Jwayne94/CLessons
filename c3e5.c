#include <stdio.h>

int main()
{
    float years, sec;
    sec = 3.156E7;

    printf("Введите свой возраст в годах:\t");
    scanf("%f", &years);

    printf("Ваш возрст %.1f в годах будет эквивалентен количеству секунд, равному %E\n", years, years*sec);

    return 0;
}