#include <iostream>
using namespace std;

int dat[300];

int func(int n, int* arr)
{
	if (n == 0)return 0;
	else if (n == 1)return arr[0];
	else if (n == 2)return arr[0] + arr[1];
	else
	{
		if (dat[n] != 0)return dat[n];
		else if (func(n - 3, arr) + arr[n - 1] + arr[n - 2] > func(n - 2, arr) + arr[n - 1])
		{
			dat[n] = func(n - 3, arr) + arr[n - 1] + arr[n - 2];
			return dat[n];
		}
		else
		{
			dat[n] = func(n - 2, arr) + arr[n - 1];
			return dat[n];
		}
	}
}
int main(void)
{
	int n, result;
	cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++)cin >> arr[i];


	result = func(n, arr);
	cout << result;
}