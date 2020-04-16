//clear
#include <iostream>

using namespace std;

int function2(int n) {

	int* stairs = new int[n];	//계단 제작
	//초깃값 삽입
	stairs[0] = 1;	//계단 1개(1)
	stairs[1] = 2;	//계단 2개(11, 2)
	stairs[2] = 4;	//계단 3개(111, 12, 21, 3)
	for (int i = 3; i < n; i++)
	{
		stairs[i] = (stairs[i - 1] + stairs[i - 2] + stairs[i - 3] )% 1000;
	}	//계단 1개후 3칸, 계단 2개후 2칸, 계단3개후 1칸

	int result = stairs[n - 1] ;
	delete[] stairs;
	return result;
}

int main(void) {
	int n;
	cin >> n;
	cout << function2(n);
}
