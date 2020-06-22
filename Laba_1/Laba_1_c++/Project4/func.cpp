#include "Header.h"

//������� ��������� �������� �� ���� 
void reduction(int& num) {
	int num_b = 0;
	int i = 0;
	while (num_b != 1) {  //���� ����� num_b �� ������� 1, �������� ��
		num_b = (num >> i) & 1;
		num = num ^ (1 << i);
		i++;
	}
}

//������� ��������� �������
bool comparison(int a, int b) //bool ����� - ���/�
{
	int num_2, num_3;
	bool flag = false;
	for (int mask = sizeof(int) * 8 - 1; mask >= 0; mask--) //�������� sizeof ������� ����� � ������ ��'���� ��� ���� �����
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