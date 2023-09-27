#include <stdio.h>

int upper(int c)
{
    if (c >= 'a' && c <= 'z')
    {
        return c - 'a' + 'A';
    }
    return c; //Возвращает неправильный символ
}

int main()
{
    char c;

    printf("Insert lowercase char: ");
    scanf("%c", &c);

    c = upper(c);   // Сохраняем результат преобразования в переменной c

    printf("\nUpper - %c\n", c);

    return 0;
}