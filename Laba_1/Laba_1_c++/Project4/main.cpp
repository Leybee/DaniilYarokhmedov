#include <iostream>
#include "Header.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	cout << "Laba_1, Yarokhmedov D., V-14" << endl<<endl;
	int num_1 = 0;
	cout << "����i�� �������� ��� ��������� �� 1: ";
	cin >> num_1;
	reduction(num_1);
	cout << "���������: " << num_1 << endl << endl;


	int a, b;
	cout << "����i�� ����� ��� ���i������" << endl;
	cout << "����i�� ����� �����: ";
	cin >> a;
	cout << "����i�� ����� �����: ";
	cin >> b;

	bool result = comparison(a, b);

	if (result)
		cout << "����� ����� ����� �� ����� �����" << endl;
	else
		cout << "����� ����� �����, ��� ���i���� ����i� ����i" << endl;

	return 0;
}

