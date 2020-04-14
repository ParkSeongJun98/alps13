#include <iostream>

using namespace std;

int main(void) {
	//입력
	int r, c;
	cin >> r >> c;
	//맵 제작
	int** map = new int* [r];
	for (int i = 0; i < r; i++)
	{
		map[i] = new int[c];
	}

	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			if (i == 0 || j == 0)
			{
				map[i][j] = 1;
			}
			else {
				map[i][j] = (map[i - 1][j] + map[i][j - 1])%100000000;
			}
		}
	}
	cout << map[r-1][c-1];
}