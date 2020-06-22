#include <iostream>
#include "Header.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	cout << "Laba_1, Yarokhmedov D., V-14" << endl<<endl;
	int num_1 = 0;
	cout << "Введiть значення для зменшення на 1: ";
	cin >> num_1;
	reduction(num_1);
	cout << "Результат: " << num_1 << endl << endl;


	int a, b;
	cout << "Введiть цифри для порiвняння" << endl;
	cout << "Введiть першу цифру: ";
	cin >> a;
	cout << "Введiть другу цифру: ";
	cin >> b;

	bool result = comparison(a, b);

	if (result)
		cout << "Перша цифра менше за другу цифру" << endl;
	else
		cout << "Друга цифра менша, або дорiвнює першiй цифрi" << endl;

	return 0;
}

