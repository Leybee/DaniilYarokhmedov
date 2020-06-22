#pragma once

#include <math.h>
#include <iostream>
#include <windows.h>
#include <stdio.h>

using namespace std;

class ExpressionClassC
{
private: double a, b, c, d;// Наші значення

public: ExpressionClassC(double a, double b, double c, double d)// Конструктор з параметрами
{
    this->a = a;
    this->b = b;
    this->c = c;
    this->d = d;
}

public: double Value()//Метод виведення значення нашого виразу
{
    try
    {
        if (a > 0 && b < 0)
        {
            throw "У виразі Ln (x), x - не може бути мінусовим!";
        }
    }
    catch (const char* a)
    {
        MessageBoxA(GetActiveWindow(), a, "Помилка!", MB_ICONERROR);//Вихідне повідомлення з помилкою
        exit(1);//Закриває вікно та виходить із програми
    }
    try
    {
        if (a < 0 && b > 0)
        {
            throw "У виразі Ln (x), x - не може бути мінусовим!";
        }
    }
    catch (const char* b)
    {
        MessageBoxA(GetActiveWindow(), b, "Помилка!", MB_ICONERROR);
        exit(1);
    }
    try
    {
        if (b == 0)
        {
            throw "Значення b не може бути нулем!";
        }
    }
    catch (const char* c)
    {
        MessageBoxA(GetActiveWindow(), c, "Помилка!", MB_ICONERROR);
        exit(1);
    }
    try
    {
        if (c + b - d + a == 0)
        {
            throw "Вираз (c + b - d + a) не може дорівнювати нулю!";
        }
    }
    catch (const char* d)
    {
        MessageBoxA(GetActiveWindow(), d, "Помилка!", MB_ICONERROR);
        exit(1);
    }
    return((4 * log10(a / b) + 1) / (c + b - d + a));//Повертаємо значення виразу
}
};