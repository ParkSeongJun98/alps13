#include <iostream>
#include <string>

using namespace std;

int main(void) {
	// 배열 제작
	int n, m;
	cin >> n >> m;
	string* wordList = new string[n];
	int* numList = new int[n];
	// 숫자 입력
	int num;
	string word;
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		//일단 입력
		cin >> word >> num;
		wordList[count] = word;
		numList[count] = num;
		//중복 탐지
		for (int j = 0; j < count; j++)
		{
			if (word == wordList[j])
			{
				numList[j] += num;
				count--;
				break;
			}
		}
		count++;		
	}
	//질문 시간
	for (int i = 0; i < m; i++)
	{
		int index = -1;
		cin >> word;
		for (int j = 0; j < count; j++)
		{
			if (word == wordList[j]) index = j;
		}
		if (index == -1)cout << 0 << endl;
		else cout << numList[index] << endl;
	}
}