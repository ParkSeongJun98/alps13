#include<iostream>
#include<algorithm>
using namespace std;

int main(void)
{
	int arr[9], arr2[7];
	int sum = 0;
	for (int i = 0; i < 9; i++)
	{
		cin >> arr[i];
	}
	int i = 0, s = 0;
	while (sum != 100)
	{
		sum = 0;
		s++;
		if (s == 9)
		{
			i++;
			s = i + 1;
		}
		if (i == 8)return 0;
		for (int x = 0; x < 9; x++)
		{
			if (x != i && x != s)sum += arr[x];
		}
	}
	int hh = 0;
	for (int x = 0; x < 9; x++)
	{
		if (x != i && x != s)
		{
			arr2[hh] = arr[x];
			hh++;
		}
	}
	sort(arr2, arr2 + 7);
	for (int x = 0; x < 7; x++)
	{
		cout << arr2[x] << endl;
	}
}