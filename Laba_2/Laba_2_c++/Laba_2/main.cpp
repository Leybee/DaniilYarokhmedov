#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Row
{
	string row;
public:
	Row()
	{
		row = "";
	}
	Row(string r)
	{
		row = r;
	}
	char operator[] (const int index)
	{
		return row[index];
	}
	int length()
	{
		return row.length();
	}
	void set(string r)
	{
		row = r;
	}
	string get()
	{
		return row;
	}
};

class Text
{
	vector <Row> rows;
public:
	Text(Row r)
	{
		rows.push_back(r);
	}
	void append(Row r)
	{
		rows.push_back(r);
	}
	void dropLast()
	{
		rows.pop_back();
	}
	void clearAll()
	{
		rows.clear();
	}
	string operator[] (const int index)
	{
		Row temp = rows[index];
		return temp.get();
	}
	float getFrequencyOfCymvol(char ch)
	{
		Row temp;
		float frequencyCym = 0;
		float countCym = 0;
		for (int i = 0; i < rows.size(); i++)
		{
			temp.set(rows[i].get());
			for (int j = 0; j < temp.length(); j++)
			{
				countCym++;
				if (temp[j] == ch) {
					frequencyCym++;
				}
			}
		}
		return frequencyCym / countCym;
	}
	void deleteInd(int ind)
	{
		rows.erase(rows.begin() + ind);
	}
	void replacement(int ind, Row r)
	{
		rows[ind] = r;
	}
	void dropDublicate()
	{
		bool flag = false;
		string temp;
		for (int i = 0; i < rows.size(); i++)
		{
			temp = rows[i].get();
			for (int j = i; j < rows.size(); j++)
			{
				for (int k = 0; k < temp.length() && k < rows[j].get().length(); k++)
				{
					if (temp[k] != rows[j].get()[k])
					{
						flag = true;
					}
				}
			}
			if (!flag)
			{
				deleteInd(i);
			}
			flag = false;
		}
	}
	void Show()
	{
		cout << "==========================" << endl;
		for (int i = 0; i < rows.size(); i++)
		{
			cout << rows[i].get() << endl;
		}
		cout << "==========================" << endl;
	}
};

int main()
{
	setlocale(LC_ALL, "RUS");
	cout << "Laba_2, Yarokhmedov D., V-14" << endl;
	Row first("Слiд друговi допомагати,");
	Row second("В пригодi завжди захищати,");
	Row third("Слiд жарти друга розумiти");
	Row fourth("Й самому жартувати вмiти.");
	Text text(first);
	text.append(second);
	text.append(third);
	text.append(fourth);
	text.Show();
	cout << "Частота появи лiтери 'е' - " << text.getFrequencyOfCymvol('е') * 100 << '%' << endl;
	cout << "Частота появи лiтери 'о' - " << text.getFrequencyOfCymvol('о') * 100 << '%' << endl;
	cout << "Частота появи лiтери 'а' - " << text.getFrequencyOfCymvol('а') * 100 << '%' << endl;
	text.Show();
	cout << "Видалимо 1 та 3 рядок" << endl;
	text.deleteInd(0);
	text.deleteInd(1);
	text.Show();
	cout << "Перший рядок продублюємо в третiй" << endl;
	text.append(second);
	text.Show();
	cout << "Видалимо дублiкати з тексту" << endl;
	text.dropDublicate();
	text.Show();
	return 0;
}