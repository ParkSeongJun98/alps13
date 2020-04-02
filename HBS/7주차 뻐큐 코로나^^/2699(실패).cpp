/*
#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string arr1,temp1;
	string arr2,temp2;
	int arr[1001][1001];

	cin >> temp1;
	cin >> temp2;
	arr1 = '0' + temp1;
	arr2 = '0' + temp2;
	for (int i = 0; i < arr1.length(); i++)
	{
		for (int j = 0; j < arr2.length(); j++)
		{
			if (i == 0 || j == 0)
			{
				arr[i][j] = 0;
				continue;
			}

			if (arr1[i] == arr2[j])
			{
				arr[i][j] = arr[i - 1][j - 1] + 1;
			}
			else
			{
				if (arr[i - 1][j] > arr[i][j - 1])arr[i][j] = arr[i - 1][j];
				else arr[i][j] = arr[i][j - 1];
			}
		}
	}
	cout << arr[arr1.length() - 1][arr2.length() - 1];
}
*/



#include <iostream>
#include <string>
using namespace std;

string arr1;
string arr2;
int m = 0;
void finddd(int x1, int x2, int count)
{
	if (x1 == arr1.length() - 1 || x2 == arr2.length() - 1)
	{
		if (arr1[x1] == arr2[x2])
		{
			count++;
		}
		if (m < count)
		{
			m = count;
		}
		return;
	}

	if (arr2.find(arr1[x1], x2) < arr2.length())
	{
		finddd(x1 + 1, arr2.find(arr1[x1], x2) + 1, count + 1);
	}
	finddd(x1 + 1, x2, count);
}

int main(void)
{
	cin >> arr1;
	cin >> arr2;
	finddd(0, 0, 0);
	cout << m;
}