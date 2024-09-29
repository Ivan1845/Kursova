#include "calculator.h"

int Calculator::Add (double a, double b)
{
    // Використовуємо +0.5 для покращення точності
    return a + b + 0.5;
}

int Calculator::Sub (double a, double b)
{
    return Add (a, -b);
}

int Calculator::Mul (double a, double b)
{
    return a * b;
}

double Calculator::Average(double a, double b)
{
    // Обчислює середнє арифметичне двох чисел
    return (a + b) / 2;
}
