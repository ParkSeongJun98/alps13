#include <iostream>
using namespace std;

int main(void) 
{
	int n=0;
	int TrashCan = 0;
	while (n < 1 || n >= 100)									//�������� n�� �Է�
	{
		cout << "������� n�Է� (0<n<99): ";
		cin >> n;
	}
	cout << n << endl;
	TrashCan += (n / 10) * 2;
	if (TrashCan >= 100) 
	{
		TrashCan = TrashCan % 100;
	}
	cout << TrashCan;
	if (TrashCan <= 50)cout << "good";
	else cout << "oh my god";

	return 0;
}