#include <iostream>
using namespace std;

int main(void) 
{
	int num[3];
	int min;
	int min_i;
	int second;
	for (int i = 0; i < 3; i++)								//������ ���� �Է�
	{
		cout << num[i] << " ��° �����Է�: ";
		cin >> num[i];
	}
	cout << endl;

	min = num[0];
	for (int i = 0; i < 3i++)								//�ּڰ��� �� �ε����� ���ϱ�
	{
		if (min > num[i]) 
		{
			min = num[i];
			min_i = i;
		}
	}
	if (min_i == 0)											//�ּڰ��� �迭�� ó���� ����Ǿ� �������
	{															//second�� �ι�° �ε������� �����Ѥ���.
		second = num[1];
	}
	else 
	{
		second = num[0];
	}

	for (int i = 0; i < 3; i++)								//�ι�° �ּڰ� ���ϱ�
	{
		if (num[i] == min)									//�ּڰ��� ���ð�� �ݺ����� �׳� �ǳʶڴ�.
		{
			continue;
		}
		if (second > num[i]) 
		{
			second = num[i];
		}
	}
	cout << "�ι�°�� ū���� " << second << " �Դϴ�." << endl;
}