#include<iostream>
using namespace std;

int co = 10000;	//��׸��� �ٵ��������������� ����Ǽ� �ʱⰪ�� �׳� 10000�̶���


void findd(int arr[], int i, int now, int check)//i = arr�迭�� ���� index , now = ��׸��� ������ ���� Ƚ��, check = �迭�ӿ� 1���ִ���������
{
	int temp[8];	//�ѹ��� �Լ��� ������ ������ ���� �ٲ�� arr�迭�� �̸� �ϳ� �����س��Ƽ� �ΰ��� ����Լ��� �̷������ ����
	for (int i = 0; i < 8; i++)
	{
		temp[i] = arr[i];
		if (arr[i] == 1)check = 2;
	}

	if (check == 1)
	{
		if (co > now)co = now;
		return;
	}
	if (i == 8)
	{
		return;
	}

	if (check == 2)
	{
		if (i == 0)
		{
			if (arr[i] == 1)
			{
				arr[i] = 0;
				if (arr[i + 1] == 0)arr[i + 1] = 1;
				else if (arr[i + 1] == 1)arr[i + 1] = 0;
			}
			else if (arr[i] == 0)
			{
				arr[i] = 1;
				if (arr[i + 1] == 0)arr[i + 1] = 1;
				else if (arr[i + 1] == 1)arr[i + 1] = 0;
			}
		}
		else if (i == 7)
		{
			if (arr[i] == 1)
			{
				arr[i] = 0;
				if (arr[i - 1] == 0)arr[i - 1] = 1;
				else if (arr[i - 1] == 1)arr[i - 1] = 0;
			}
			else if (arr[i] == 0)
			{
				arr[i] = 1;
				if (arr[i - 1] == 0)arr[i - 1] = 1;
				else if (arr[i - 1] == 1)arr[i - 1] = 0;
			}
		}
		else
		{
			if (arr[i] == 0)
			{
				if (arr[i - 1] == 0)arr[i - 1] = 1;
				else if (arr[i - 1] == 1)arr[i - 1] = 0;
				if (arr[i + 1] == 0)arr[i + 1] = 1;
				else arr[i + 1] = 0;
				arr[i] = 1;
			}
			else if (arr[i] == 1)
			{
				if (arr[i - 1] == 0)arr[i - 1] = 1;
				else if (arr[i - 1] == 1)arr[i - 1] = 0;
				if (arr[i + 1] == 0)arr[i + 1] = 1;
				else if (arr[i + 1] == 1)arr[i + 1] = 0;
				arr[i] = 0;
			}
		}
		findd(arr, i + 1, now + 1, 1);

		findd(temp, i + 1, now, 1);
	}
}

int main(void)
{
	int arr[8];
	for (int i = 0; i < 8; i++)
	{
		cin >> arr[i];
	}
	findd(arr, 0, 0, 1);
	cout << co;
	return 0;
}