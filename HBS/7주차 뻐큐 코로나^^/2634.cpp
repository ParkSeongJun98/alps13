#include <iostream>
using namespace std;
int kind;	//���� ���� ����
int x = 1000;	//�������� �ּڰ�
int* arr;	//���� �ݾ� �������� ���� �迭
void findd(int m, int count, int i)
{
	int num, temp_count, temp_m;	//������ �ִ� ���� , ���� ����Լ��� ������ �ӽ� ���� ���� , ���� �ε���
	if (m == 0)
	{
		if (x > count)x = count;
		return;
	}

	if (m < arr[0])return;
	if (i == -1)return;
	if (m >= arr[i])
	{
		num = m / arr[i];
		for (int s = num; s >= 0; s--)
		{
			temp_m = m;
			temp_m -= arr[i] * s;
			temp_count = s;
			if (temp_count + count > x)return;	//�ӽõ������� ���ϱ� ���� ���������� �ּڰ����� Ŭ��� �̾�� �ʿ䰡 �����Ƿ� ����
			findd(temp_m, count + temp_count, i - 1);
		}
	}
	findd(m, count, i - 1);
}
int main(void)
{
	int money;
	cin >> money;
	cin >> kind;
	arr = new int[kind];
	for (int i = 0; i < kind; i++)
	{
		cin >> arr[i];
	}
	findd(money, 0, kind - 1);
	cout << x;
}