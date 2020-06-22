#pragma once

#include <math.h>
#include <iostream>
#include <windows.h>
#include <stdio.h>

using namespace std;

class ExpressionClassC
{
private: double a, b, c, d;// ���� ��������

public: ExpressionClassC(double a, double b, double c, double d)// ����������� � �����������
{
    this->a = a;
    this->b = b;
    this->c = c;
    this->d = d;
}

public: double Value()//����� ��������� �������� ������ ������
{
    try
    {
        if (a > 0 && b < 0)
        {
            throw "� ����� Ln (x), x - �� ���� ���� ��������!";
        }
    }
    catch (const char* a)
    {
        MessageBoxA(GetActiveWindow(), a, "�������!", MB_ICONERROR);//������� ����������� � ��������
        exit(1);//������� ���� �� �������� �� ��������
    }
    try
    {
        if (a < 0 && b > 0)
        {
            throw "� ����� Ln (x), x - �� ���� ���� ��������!";
        }
    }
    catch (const char* b)
    {
        MessageBoxA(GetActiveWindow(), b, "�������!", MB_ICONERROR);
        exit(1);
    }
    try
    {
        if (b == 0)
        {
            throw "�������� b �� ���� ���� �����!";
        }
    }
    catch (const char* c)
    {
        MessageBoxA(GetActiveWindow(), c, "�������!", MB_ICONERROR);
        exit(1);
    }
    try
    {
        if (c + b - d + a == 0)
        {
            throw "����� (c + b - d + a) �� ���� ���������� ����!";
        }
    }
    catch (const char* d)
    {
        MessageBoxA(GetActiveWindow(), d, "�������!", MB_ICONERROR);
        exit(1);
    }
    return((4 * log10(a / b) + 1) / (c + b - d + a));//��������� �������� ������
}
};