#include <iostream>
using namespace std;

int* codeup;
int* koistudy;
int n,m = 0;	//n = ������ �� �� , m = ������ �ִ�

void find(int sum, int now, int up, int dy)	//sum = ���� , now = ���� �ε��� , up = ���տ� �� codeup������ �� , dy = ���տ� �� koistudy������ ��
{
	if (now == n)return;	//now�� n�� ������� �׳� ����
	if (now == n - 1)		//n-1�� ��츸 �ִ밪 ����� �����
	{

		if (up == n - 1 && codeup[now] > koistudy[now])return;	//���տ� �� codeup������ ���� n-1 && codeup���������ڵ� koistudy���� ũ�� ����
		if (dy == n - 1 && codeup[now] < koistudy[now])return;	//���տ� �� koistudy������ ���� n-1 && koistudy���������ڵ� codeup���� ũ�� ����
		if (m < sum + codeup[now])m = sum + codeup[now];		//���� �ΰ�찡�ƴϸ� ���� �ִ� �Ƿ�ġ ���� ����
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
