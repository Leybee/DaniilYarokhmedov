#include <iostream>
#include <string>

using namespace std;

int cacl(string s)
{
	int count = 0;
	for (int i = 0; i < s.length(); i++)
	{
		if (isupper(s[i])) count++; // якщо поточний символ прописний, продовжити рахувати
	}
	return count;
}

int main()
{
	setlocale(LC_ALL, "RUS");
	cout << "Laba_8, Yarokhmedov D., V-14\n" << endl;
	string s = "_";
	cout << "Введiть рядок" << endl;
	cin >> s;
	int(*bigletters)(string s) = cacl;
	cout << "У вашому рядку " << (*bigletters)(s) << " великих лiтер" << endl;
	return 0;
}