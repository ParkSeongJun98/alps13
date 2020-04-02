#include<iostream>
using namespace std;

int co = 10000;	//밥그릇이 다뒤집어져있을때의 경우의수 초기값을 그냥 10000이라설정


void findd(int arr[], int i, int now, int check)//i = arr배열의 현재 index , now = 밥그릇을 뒤집은 현재 횟수, check = 배열속에 1이있는지없는지
{
	int temp[8];	//한번의 함수가 끝나면 무조건 값이 바뀌는 arr배열을 미리 하나 복사해놓아서 두개의 재귀함수를 이루기위해 만듦
	for (int i = 0; i < 8; i++)
	{
		temp[i] = arr[i];
		if (arr[i] == 1)check = 2;
	}

	if (check == 1)
	{
		if (co > now)co = now;
		return;
	}
	if (i == 8)
	{
		return;
	}

	if (check == 2)
	{
		if (i == 0)
		{
			if (arr[i] == 1)
			{
				arr[i] = 0;
				if (arr[i + 1] == 0)arr[i + 1] = 1;
				else if (arr[i + 1] == 1)arr[i + 1] = 0;
			}
			else if (arr[i] == 0)
			{
				arr[i] = 1;
				if (arr[i + 1] == 0)arr[i + 1] = 1;
				else if (arr[i + 1] == 1)arr[i + 1] = 0;
			}
		}
		else if (i == 7)
		{
			if (arr[i] == 1)
			{
				arr[i] = 0;
				if (arr[i - 1] == 0)arr[i - 1] = 1;
				else if (arr[i - 1] == 1)arr[i - 1] = 0;
			}
			else if (arr[i] == 0)
			{
				arr[i] = 1;
				if (arr[i - 1] == 0)arr[i - 1] = 1;
				else if (arr[i - 1] == 1)arr[i - 1] = 0;
			}
		}
		else
		{
			if (arr[i] == 0)
			{
				if (arr[i - 1] == 0)arr[i - 1] = 1;
				else if (arr[i - 1] == 1)arr[i - 1] = 0;
				if (arr[i + 1] == 0)arr[i + 1] = 1;
				else arr[i + 1] = 0;
				arr[i] = 1;
			}
			else if (arr[i] == 1)
			{
				if (arr[i - 1] == 0)arr[i - 1] = 1;
				else if (arr[i - 1] == 1)arr[i - 1] = 0;
				if (arr[i + 1] == 0)arr[i + 1] = 1;
				else if (arr[i + 1] == 1)arr[i + 1] = 0;
				arr[i] = 0;
			}
		}
		findd(arr, i + 1, now + 1, 1);

		findd(temp, i + 1, now, 1);
	}
}

int main(void)
{
	int arr[8];
	for (int i = 0; i < 8; i++)
	{
		cin >> arr[i];
	}
	findd(arr, 0, 0, 1);
	cout << co;
	return 0;
}