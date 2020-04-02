/*
#include <iostream>
using namespace std;

int abs(int x, int y)
{
	if (x > y)return x - y;
	if (x < y)return y - x;
	if (x = y)return 0;
}
int main(void)
{
	int m, n, l;
	int count = 0;
	cin >> m >> n >> l;
	int* arrm = new int[m];
	int** arrn = new int* [n];
	for (int i = 0; i < n; i++)arrn[i] = new int[2];
	for (int i = 0; i < m; i++)cin >> arrm[i];
	for (int i = 0; i < n; i++)
	{
		for (int s = 0; s < 2; s++)cin >> arrn[i][s];
	}

	for (int i = 0; i < n; i++)
	{
		for (int s = 0; s < m; s++)
		{
			if (abs(arrm[s], arrn[i][0]) + arrn[i][1] <= l)
			{
				count++;
				break;
			}
		}
	}
	cout << count;
}
*/

#include <iostream>
#include <algorithm>
using namespace std;

int m;
int abs(int x, int y)
{
	if (x > y)return x - y;
	else return y - x;
}

int func(int arr[], int up, int down, int key)
{
	int mid = (up + down) / 2;
	int x = abs(arr[down], key);
	if (up - down < 3)
	{
		for (int i = down + 1; i <= up; i++)
		{
			if (x > abs(arr[i], key))x = abs(arr[i], key);
		}
		return x;
	}
	if (arr[mid] > key)return func(arr, mid, down, key);
	else if (arr[mid] < key)return func(arr, up, mid, key);
	else return 0;
}
int main(void)
{
	int n, l;
	int count = 0;
	cin >> m >> n >> l;
	int* arrm = new int[m];
	int** arrn = new int* [n];
	for (int i = 0; i < n; i++)arrn[i] = new int[2];

	for (int i = 0; i < m; i++)cin >> arrm[i];
	for (int i = 0; i < n; i++)
	{
		for (int s = 0; s < 2; s++)cin >> arrn[i][s];
	}
	sort(arrm, arrm + m);
	int num;
	for (int i = 0; i < n; i++)
	{
		if (arrn[i][1] > l)continue;
		num = func(arrm, m - 1, 0, arrn[i][0]);
		if (num + arrn[i][1] <= l)count++;
	}
	cout << count;
}