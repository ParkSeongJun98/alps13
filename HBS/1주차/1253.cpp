#include <iostream>
using namespace std;
int main(void)
{
	int a, b;
	cout << "a�Է�: ";
	cin >> a;
	cout << "b�Է�: ";
	cin >> b;
	if (a < b) {
		for (a; a <= b; a++)
		{
			cout << a << "  ";
		}
	}
	else
	{
		for (b; b <= a; b++)
		{
			cout << b << "  ";
		}
	}
}