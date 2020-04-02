#include <iostream>
using namespace std;
int* arr;
int co = 0, n, s;
void func(int index, int sum)
{
	if (index == n)return;
	sum += arr[index];
	if (sum == s)co++;
	sum -= arr[index];
	func(index + 1, sum);
	func(index + 1, sum + arr[index]);
}
int main(void)
{
	cin >> n >> s;
	arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	func(0, 0);
	cout << co;
	delete[]arr;

	return 0;
}