//왜 시간초과지? 재귀함수 쓰라고 했는데? 
#include <iostream>

using namespace std;

int function(int n) {
	//처음에는 1로 반환
	if (n == 1 || n == 2)return 1;
	else return (function(n - 1) + function(n - 2)); //앞 두수를 더한 값을 반환
}

int main(void) {
	//입력
	int n;
	cin >> n;
	cout << function(n);
}