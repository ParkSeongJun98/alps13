#include <iostream>

using namespace std;

int function(int n) {

	if (n == 1)return 1;		//��� 1��(1)
	else if (n == 2)return 2;	//��� 2��(11, 2)
	else if (n == 3)return 4;	//��� 3��(111, 12, 21, 3)
	else return function(n - 1) + function(n - 2) + function(n - 3);
}	//��� 1���� 3ĭ, ��� 2���� 2ĭ, ���3���� 1ĭ

int main(void) {
	int n;
	cin >> n;
	cout << function(n);
}