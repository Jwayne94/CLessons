#include <stdio.h>

int lower(int c)
{
    if (c >= 'A' && c <= 'Z')
    {
        return c + 'a' - 'A';
    }
    return c; //Возвращает неправильный символ
}

int main()
{
    char c = lower('A');
    printf("lower - %c\n", c);

    return 0;s
}