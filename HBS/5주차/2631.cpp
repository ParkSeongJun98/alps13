#include <iostream>
using namespace std;

int main(void)
{
	int n, k;
	int s = 0, sum = 0, treasure = 0;
	cin >> n >> k;
	int arr[100000];
	for (int i = 0; i < n; i++)cin >> arr[i];

	for (int i = 0; i < n; i++)
	{
		while (sum < k)
		{
			sum += arr[i + s];
			s++;
		}
		if (sum == k)treasure++;
		s = 0;
		sum = 0;
	}
	cout << treasure;
}