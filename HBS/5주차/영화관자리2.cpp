#include<iostream>
using namespace std;

int arr[30][30];
int func(int num1, int num2)
{
	if (arr[num1 - 1][num2 - 1])
	{
		return arr[num1 - 1][num2 - 1];
	}
	else if (num2 < 2 * num1 - 1)
	{
		arr[num1 - 1][num2 - 1] = 0;
		return arr[num1 - 1][num2 - 1];
	}
	else if (num1 == 1)
	{
		arr[num1 - 1][num2 - 1] = num2;
		return arr[num1 - 1][num2 - 1];
	}
	else if (num2 == 2 * num1 - 1)
	{
		arr[num1 - 1][num2 - 1] = 1;
		return arr[num1 - 1][num2 - 1];
	}
	else return func(num1 - 1, num2 - 2) + func(num1, num2 - 1);
}
int main(void)
{
	int n, m;
	cin >> n >> m;

	cout << func(m, n) << endl;

}