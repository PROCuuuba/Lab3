#include <stdio.h>

int main()
{
    // Задание 1
    char c = '!'; 
    int i = 2;
    float f = 3.14f;
    double d = 5e-12;
    
    printf("Переменная c = %c\n", c);
    printf("Переменная i = %d\n", i);
    printf("Переменная f = %g\n", f);
    printf("Переменная d = %lg\n", d);

    // Задание 1а
    printf("Введите новое значение для переменной f >\n");
    scanf("%g", &f);

    int int1 = (int)f;
    float float1 = f - int1;

    printf("Целая часть переменной c = %d\n", int1);
    printf("Дробная часть переменной c = %.6f\n", float1);

    printf("Введите новое значение для переменной d >\n");
    scanf("%lg", &d);

    int int2 = (int)d;
    double double1 = d - int2;

    printf("Целая часть переменной d = %d\n", int2);
    printf("Дробная часть переменной d = %.6f\n", double1);


    // Задание 1б
    printf("Введите новое значение для переменной d >\n");
    scanf("%c", &c);

    printf("Десятичный код переменной c = %d\n", (int)c);
    printf("Шестнадцатеричный код переменной c = %X\n", (int)c);

    // Задание 1в
    printf("Введите новое значение для переменной i >\n");
    scanf("%d", &i);
    printf("Десятично число переменной i = %f\n", 1/(double)i);


    // Задание 2
    float a = 11;
    double b = 3;

    printf("x = %d, y = %f, z = %lf\n", (int)a/(int)b, a/(float)b, (double)a/b);

    // Задание 3
    int N;

    printf("Введите число N\n");
    scanf("%d", &N);

    int firstDigit = N / 100;
    int secondDigit = (N / 10) % 10;
    int thirdDigit = N % 10;
    int sumDigits = firstDigit + secondDigit + thirdDigit;
    int reversedNumber = (thirdDigit * 100) + (secondDigit * 10) + firstDigit;

    printf("Последняя цифра = %d, первая цифра = %d, сумма цифр = %d, число наоборот = %d\n", thirdDigit, firstDigit, sumDigits, reversedNumber);
}