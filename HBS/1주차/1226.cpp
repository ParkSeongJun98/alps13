#include <iostream>
using namespace std;

int main(void)
{
	int lotto[7];
	int mylotto[6];
	int num = 0;									//�������� ����
	bool bonus = false;								//���������� 6���ϰ�� ���ʽ�������� �ƴϸ� �׳� �ٸ������ �Ǵ�
	for (int i = 0; i < 7; i++)
	{
		cin >> lotto[i];
	}
	cout << endl;
	for (int i = 0; i < 6; i++)
	{
		cin >> mylotto[i];
	}

	for (int m = 0; m < 6; m++)							//���ζǹ�ȣ�� �ζǹ�ȣ�� ��
	{
		for (int l = 0; l < 6; l++)
		{
			if (lotto[l] == mylotto[m])				//��ȣ�� ���� ���
			{
				num++;								//������ +1���ְ�
				break;
			}
		}

		if (mylotto[m] == lotto[6])
		{
			num++;									//���ʽ���ȣ�� ����ȣ�� ������쵵 ����+1
			bonus = true;							//���ʽ���ȣ�� ���� ���!
		}

	}

	switch (num)
	{
	case 0:
		cout << "��" << endl;
		break;
	case 1:
		cout << "��" << endl;
		break;
	case 2:
		cout << "��" << endl;
		break;
	case 3:
		cout << "5��" << endl;
		break;
	case 4:
		cout << "4��" << endl;
		break;
	case 5:
		cout << "3��" << endl;
		break;
	case 6:
		if (bonus == true)
		{
			cout << "2��" << endl;
		}
		else
		{
			cout << "1��" << endl;
		}
	}
}