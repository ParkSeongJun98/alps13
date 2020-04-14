#include <iostream>

using namespace std;

int function(int n) {

	if (n == 1)return 1;		//계단 1개(1)
	else if (n == 2)return 2;	//계단 2개(11, 2)
	else if (n == 3)return 4;	//계단 3개(111, 12, 21, 3)
	else return function(n - 1) + function(n - 2) + function(n - 3);
}	//계단 1개후 3칸, 계단 2개후 2칸, 계단3개후 1칸

int main(void) {
	int n;
	cin >> n;
	cout << function(n);
}