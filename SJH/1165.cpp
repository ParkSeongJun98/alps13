#include <iostream>
using namespace std;

int main()
{
	int a = 75;	//a�� �Է½ð�
	int b = 2;	//b�� �Էµ���
	int c = 0;	//c�� ��µ���

	cin >> a;
	cin >> b;

	if (a % 5 == 0) {
		c = (90 - a) / 5 + b;
	}
	else {
		c = (90 - a) / 5 + b + 1;
	}
	cout << c;

	return 0;
}
