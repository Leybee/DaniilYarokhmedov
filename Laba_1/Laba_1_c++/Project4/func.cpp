#include "Header.h"

//функція зменшення значення на один 
void reduction(int& num) {
	int num_b = 0;
	int i = 0;
	while (num_b != 1) {  //поки змінна num_b не дорівнює 1, виконуємо дію
		num_b = (num >> i) & 1;
		num = num ^ (1 << i);
		i++;
	}
}

//функція порівняння значень
bool comparison(int a, int b) //bool змінна - так/ні
{
	int num_2, num_3;
	bool flag = false;
	for (int mask = sizeof(int) * 8 - 1; mask >= 0; mask--) //оператор sizeof повертає розмір в байтах об'єкта або типу даних
	{
		num_2 = a & (1 << mask);
		num_3 = b & (1 << mask);
		if (num_2 < num_3)
		{
			flag = true;
			break;
		}
		else
			if (num_2 > num_3)
			{
				flag = false;
				break;
			}
	}
	return flag;
}