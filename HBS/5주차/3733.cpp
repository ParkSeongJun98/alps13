#include <iostream>
using namespace std;

int num[10000001];
int func(long long int n)
{
	if (n > 10000000)
	{
		if (n % 2 == 0)return func(n / 2) + 1;
		else return func(3 * n + 1) + 1;
	}
	if (n == 1)return 1;
	else
	{
		if (num[n])return num[n];
		else if (n % 2 == 1)
		{
			num[n] = func(3 * n + 1) + 1;
			return num[n];
		}
		else if (n % 2 == 0)
		{
			num[n] = func(n / 2) + 1;
			return num[n];
		}
	}
}
int main(void)
{
	long long int a, b;
	cin >> a >> b;
	int len;
	int max = 0;
	int max_i = 0;
	for (long long int s = a; s <= b; s++)
	{
		if (!num[s])len = func(s);

		if (max < len)
		{
			max_i = s;
			max = len;
		}
	}
	cout << max_i << ' ' << num[max_i];
}