#include <iostream>
using namespace std;
int kind;	//동전 종류 갯수
int x = 1000;	//동전갯수 최솟값
int* arr;	//동전 금액 오름차순 담은 배열
void findd(int m, int count, int i)
{
	int num, temp_count, temp_m;	//동전의 최대 갯수 , 다음 재귀함수에 더해질 임시 동전 갯수 , 현재 인덱스
	if (m == 0)
	{
		if (x > count)x = count;
		return;
	}

	if (m < arr[0])return;
	if (i == -1)return;
	if (m >= arr[i])
	{
		num = m / arr[i];
		for (int s = num; s >= 0; s--)
		{
			temp_m = m;
			temp_m -= arr[i] * s;
			temp_count = s;
			if (temp_count + count > x)return;	//임시동전갯수 더하기 현재 동전갯수가 최솟값보다 클경우 이어나갈 필요가 없으므로 종료
			findd(temp_m, count + temp_count, i - 1);
		}
	}
	findd(m, count, i - 1);
}
int main(void)
{
	int money;
	cin >> money;
	cin >> kind;
	arr = new int[kind];
	for (int i = 0; i < kind; i++)
	{
		cin >> arr[i];
	}
	findd(money, 0, kind - 1);
	cout << x;
}