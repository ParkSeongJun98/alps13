/*
#include <iostream>
using namespace std;

int arrn[1000000];

int func(int d, int u, int key)
{
	int x = (d + u) / 2;
	if (d == u)
	{
		if (arrn[x] != key)
		{
			return -1;
		}
		else return x + 1;
	}

	if (arrn[x] < key)
	{
		return func(x + 1, u, key);
	}
	else
	{
		return func(d, x - 1, key);
	}
}
int main(void)
{
	int n, m;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> arrn[i];
	}
	cin >> m;
	int* arrm = new int[m];
	for (int i = 0; i < m; i++)
	{
		cin >> arrm[i];
	}
	int num = 0;
	for (int i = 0; i < m; i++)
	{
		num = func(0, n - 1, arrm[i]);
		cout << num << " ";
	}
}*/

#include <iostream>
using namespace std;

int func(int arr[], int size, int key)
{
	int up = size - 1;
	int down = 0;
	int x;
	while (up >= down)
	{
		x = (up + down) / 2;
		if (arr[x] == key)return x + 1;
		else
		{
			if (arr[x] > key)
			{
				up = x - 1;
			}
			else
			{
				down = x + 1;
			}
		}
	}
	return -1;
}
int main(void)
{
	int n, m;
	cin >> n;
	int* arrn = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arrn[i];
	}
	cin >> m;
	int* arrm = new int[m];
	for (int i = 0; i < m; i++)
	{
		cin >> arrm[i];
	}
	int num = 0;
	for (int i = 0; i < m; i++)
	{
		cout << func(arrn, n, arrm[i]) << " ";
	}
}