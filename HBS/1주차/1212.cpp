#include <iostream>
using namespace std;

int main(void) 
{
	int line[3];
	int max_index,max;
	int sum = 0;
	for (int i = 0; i < 3; i++) 
	{
		cout << "���Է�: ";
		cin >> line[i];
	}
	max = line[0];
	for (int i = 1; i < 3; i++)					//�ִ밪�� ã�´�
	{
		if (max < line[i])
		{
			max = line[i];
			max_index = i;
		}
	}
	for (int i = 0; i < 3; i++)					//�ִ밪�������� ������ ���� ���Ѵ�.
	{
		if (i != max_index)sum += line[i];
	}
	if (sum > max)cout << "yes" << endl;
	else cout << "no" << endl;
}