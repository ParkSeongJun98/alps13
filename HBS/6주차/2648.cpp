#include <iostream>
using namespace std;

int arr[21];
int c = 0, m, n;
void func(int sum, int index)
{
	if (index == m + 1)
	{
		if (sum == n)
		{
			c++;
		}
		return;
	}

	func(sum + arr[index], index + 1);
	func(sum - arr[index], index + 1);
}
int main(void)
{
	cin >> n >> m;
	for (int i = 1; i <= m; i++)
	{
		cin >> arr[i];
	}
	func(0, 1);
	cout << c;
}