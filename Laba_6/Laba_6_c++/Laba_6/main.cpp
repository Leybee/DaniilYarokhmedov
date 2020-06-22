#include <iostream>
#include "func.h"
#include <iomanip>

using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    cout << "Laba_6, Yarokhmedov D., V-14\n" << endl;
    ExpressionClassC* obj[3];//Створює масиви
    obj[0] = new ExpressionClassC(1, 2, 3, 4);
    obj[1] = new ExpressionClassC(2, 1, 4, 5);
    obj[2] = new ExpressionClassC(4, 2, 5, 8);
    for (int i = 0; i < 3; i++)
    {
        cout << "Значення " << i + 1 << " = " << obj[i]->Value() << endl;;
    }
    cout << endl;
    system("pause");
    return 0;
}