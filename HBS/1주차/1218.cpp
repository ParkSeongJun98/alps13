#include <stdio.h>
using namespace std;
int main(void) 
{
	int a, b, c;
	cout << "a�Է�: ";
	cin >> a;
	cout << "b�Է�: ";
	cin >> b;
	cout << "c�Է�: ";
	cin >> c;

	if (a + b <= c)										//�ﰢ���������� �ƴҰ��
	{
		cout << "�ﰢ���ƴ�" << endl;
	}
	while (a + b > c)												//�ﰢ���ϰ��
	{
		if (a == b && b == c)
		{
			cout << "���ﰢ��" << endl;
			break;
		}
		else if (a == b || b == c || c == a)
		{
			cout << "�̵�ﰢ��" << endl;
			break;
		}
		else if (a * a + b * b == c * c)
		{
			cout << "�����ﰢ��" << endl;
			break;
		}
		else
		{
			cout << "�ﰢ��" << endl;
			break;
		}
	}
}