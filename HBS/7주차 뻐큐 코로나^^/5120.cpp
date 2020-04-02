#include <iostream>
using namespace std;

int* codeup;
int* koistudy;
int n,m = 0;	//n = 공부한 일 수 , m = 총합의 최댓값

void find(int sum, int now, int up, int dy)	//sum = 총합 , now = 현재 인덱스 , up = 총합에 들어간 codeup인자의 수 , dy = 총합에 들어간 koistudy인자의 수
{
	if (now == n)return;	//now가 n과 같을경우 그냥 종료
	if (now == n - 1)		//n-1인 경우만 최대값 계산을 허용함
	{

		if (up == n - 1 && codeup[now] > koistudy[now])return;	//총합에 들어간 codeup인자의 수가 n-1 && codeup마지막인자도 koistudy보다 크면 종료
		if (dy == n - 1 && codeup[now] < koistudy[now])return;	//총합에 들어간 koistudy인자의 수가 n-1 && koistudy마지막인자도 codeup보다 크면 종료
		if (m < sum + codeup[now])m = sum + codeup[now];		//위의 두경우가아니면 현재 최대 실력치 합을 구함
		if (m < sum + koistudy[now])m = sum + koistudy[now];
		if (codeup[now] == koistudy[now])m = sum + koistudy[now];
	}
	find(sum + codeup[now], now + 1, up + 1, dy);
	find(sum + koistudy[now], now + 1, up, dy + 1);

}

int main(void)
{
	int up = 0, dy = 0;
	cin >> n;
	codeup = new int[n];
	koistudy = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> codeup[i];
	}
	for (int i = 0; i < n; i++)
	{
		cin >> koistudy[i];
	}
	find(0, 0, 0, 0);
	cout << m;
}
