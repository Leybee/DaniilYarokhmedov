#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char* argv[]) {
	setlocale(LC_ALL, "Ukrainian");
	cout << "���i�� ��������� IC-93, ������� ������, �-3\n" << endl;

	while (true) {
		cout << endl << "�����i�� �i�:\n" << endl;
		cout << "1. ����������� ��i �������\n"
			<< "2. ����� ������� �� ������, ������, ������, �����\n"
			<< "3. �����\n" << endl;
		cout << ">>> ";

		int option;
		cout << "���i ����i���: ";
		cin >> option;
		cin.ignore();
		if (option > 3) {
			cout << endl;
			cout << "��i������ �����i�" << endl;
			option;
		}
		if (option == 3) {
			cout << endl;
			cout << "�� ��������� :)" << endl;
			break;
		}

		switch (option) {
		case 1:
		{
			cout << endl << "�����i�� �������:\n" << endl;
			cout << " 1. Shinel, Mykola Gogol, Musical, 14.02.2021\n "
				<<"2. Metod Groholma, Vadim Levanov, Tragicomedy, 23.09.2020\n" <<
				" 3. Pianist, William Shakespeare, Comedy, 12.11.2020\n" <<
				" 4. Pastka, Robert Thomas, Detective, 27.12.2020\n"
				<< " 5. �����\n" << endl;
			cout << ">>> ";
			int all;
			cin >> all;
			cin.ignore();
			if (all > 5) {
				cout << endl;
				cout << "��i������ �����i�" << endl;
				option;
			}
			if (all == 5) {
				cout << endl;
				cout << "�� ��������� :)" << endl;
				break;
			}
			switch (all) {
			case 1:
			{
				cout << endl << "�����i�� �i�:\n" << endl;
				cout << "1. ������ ���� \n"
					<< "2. ����������� ���� \n"
					<< "3. �����\n" << endl;
				cout << ">>> ";
				int buy;
				cin >> buy;
				cin.ignore();
				if (buy > 3) {
					cout << endl;
					cout << "��i������ �����i�" << endl;
					option;
				}
				if (buy == 3) {
					cout << endl;
					cout << "�� ��������� :)" << endl;
					break;
				}
				switch (buy) {
				case  1:
				{
					int arr[3] = { 2,5,9 };
					double num;
					cout << "�i��� �i���: ";
					for (int i = 0; i < 3; i++) {
						cout << arr[i] << ' ';
					}
					cout << endl;
					cout << "����i�� �i���: ";
					cin >> num;
					if (num != 2 && num != 5 && num != 9) {
						cout << "�� �i��� ������!" << endl;
					}
					else {
						cout << endl << "�������..." << endl;
					}
					break;
				}
				case 2:
				{
					int arr[3] = { 2,5,9 };
					double num;
					cout << "�i��� �i���: ";
					for (int i = 0; i < 3; i++) {
						cout << arr[i] << ' ';
					}
					cout << endl;
					cout << "����i�� �i���: ";
					cin >> num;
					if (num != 2 && num != 5 && num != 9) {
						cout << "�� �i��� ������!" << endl;
					}
					else {
						cout << endl << "������������..." << endl;
					}
					break;
				}
				}

			}
			case 2: {
				cout << endl << "�����i�� �i�:\n" << endl;
				cout << "1. ������ �i��� \n"
					<< "2. ����������� �i��� \n"
					<< "3. �����\n" << endl;
				cout << ">>> ";
				int buy;
				cin >> buy;
				cin.ignore();
				if (buy > 3) {
					cout << endl;
					cout << "��i������ �����i�" << endl;
					option;
				}
				if (buy == 3) {
					cout << endl;
					cout << "�� ��������� :)" << endl;
					break;
				}
				switch (buy) {
				case  1:
				{
					int arr1[4] = { 11, 16, 21 ,22 };
					double num;
					cout << "�i���i �i���: ";
					for (int i = 0; i < 4; i++) {
						cout << arr1[i] << ' ';
					}
					cout << endl;
					cout << "����i�� �i���: ";
					cin >> num;
					if (num != 11 && num != 16 && num != 21 && num != 22) {
						cout << "�� �i��� ������!" << endl;
					}
					else {
						cout << endl << "�������..." << endl;
					}
					break;
				}
				case 2:
				{
					int arr1[4] = { 11, 16, 21 ,22 };
					double num;
					cout << "�i���i �i���: ";
					for (int i = 0; i < 4; i++) {
						cout << arr1[i] << ' ';
					}
					cout << endl;
					cout << "����i�� �i���: ";
					cin >> num;
					if (num != 11 && num != 16 && num != 21 && num != 22) {
						cout << "�� �i��� ������!" << endl;
					}
					else {
						cout << endl << "������������..." << endl;
					}
					break;
				}

				}
			}
			case 3: {
				cout << endl << "�����i�� �i�:\n" << endl;
				cout << "1. ������ �i��� \n"
					<< "2. ����������� �i��� \n"
					<< "3. �����\n" << endl;
				cout << ">>> ";
				int buy;
				cin >> buy;
				cin.ignore();
				if (buy > 3) {
					cout << endl;
					cout << "��i������ �����i�" << endl;
					option;
				}
				if (buy == 3) {
					cout << endl;
					cout << "�� ��������� :)" << endl;
					break;
				}
				switch (buy) {
				case  1:
				{
					int arr2[7] = { 1, 2 , 3 , 4, 9, 10 ,20 };
					double num;
					cout << "�i���i �i���: ";
					for (int i = 0; i < 7; i++) {
						cout << arr2[i] << ' ';
					}
					cout << endl;
					cout << "����i�� �i���: ";
					cin >> num;
					if (num != 1 && num != 2 && num != 3 && num != 4 && num != 9 && num != 10 && num != 20) {
						cout << "�� �i��� ������!" << endl;
					}
					else {
						cout << endl << "�������..." << endl;
					}
					break;
				}
				case 2:
				{
					int arr2[7] = { 1, 2 , 3 , 4, 9, 10 ,20 };
					double num;
					cout << "�i���i �i���: ";
					for (int i = 0; i < 7; i++) {
						cout << arr2[i] << ' ';
					}
					cout << endl;
					cout << "����i�� �i���: ";
					cin >> num;
					if (num != 1 && num != 2 && num != 3 && num != 4 && num != 9 && num != 10 && num != 20) {
						cout << "�� �i��� ������!" << endl;
					}
					else {
						cout << endl << "������������..." << endl;
					}
					break;
				}
				}
			}
			case 4: {
				cout << endl << "�����i�� �i�:\n" << endl;
				cout << "1. ������ �i��� \n"
					<< "2. ����������� �i��� \n"
					<< "3. �����\n" << endl;
				cout << ">>> ";
				int buy;
				cin >> buy;
				cin.ignore();
				if (buy > 3) {
					cout << endl;
					cout << "��i������ �����i�" << endl;
					option;
				}
				if (buy == 3) {
					cout << endl;
					cout << "�� ��������� :)" << endl;
					break;
				}
				switch (buy) {
				case  1:
				{
					int arr3[2] = { 31, 32 };
					double num;
					cout << "�i���i �i���: ";
					for (int i = 0; i < 2; i++) {
						cout << arr3[i] << ' ';
					}
					cout << endl;
					cout << "����i�� �i���: ";
					cin >> num;
					if (num != 31 && num != 32) {
						cout << "�� �i��� ������!" << endl;
					}
					else {
						cout << endl << "�������..." << endl;
					}
					break;
				}
				case 2:
				{
					int arr3[2] = { 31, 32 };
					double num;
					cout << "�i���i �i���: ";
					for (int i = 0; i < 2; i++) {
						cout << arr3[i] << ' ';
					}
					cout << endl;
					cout << "����i�� �i���: ";
					cin >> num;
					if (num != 31 && num != 32) {
						cout << "�� �i��� ������!" << endl;
					}
					else {
						cout << endl << "������������..." << endl;
					}
					break;
				}
				}
			}
			}
		case 2:
		{
			string data[] = { "1. Shinel, Mykola Gogol, Musical, 14.02.2021 ",
				"2. Metod Groholma, Vadim Levanov, Tragicomedy, 23.09.2020",
				"3. Pianist, William Shakespeare, Comedy, 12.11.2020",
				"4. Pastka, Robert Thomas, Detective, 27.12.2020"};

			int size = 4;
			string look;
			cout<<"����i�� ����� �������, ��� ������, ����, ����: "<<endl;
			cin >> look;
			for (int x = 0; x < size; x++) {
				if (data[x].find(look, 0) != std::string::npos) {
					cout << data[x] << endl;
				}
				else {
					cout<<"�������"<<endl;
				}
			}
			break;

		}

		}
		}
	}
}