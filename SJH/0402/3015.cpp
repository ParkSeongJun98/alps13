#include<iostream>
#include<algorithm>
#include <string>
using namespace std;

struct Str{
	int score;
	string name;
	int number;
};

bool desc(const Str &a, const Str &b) {
	if (a.score > b.score)return true;
	else if (a.score < b.score)return false;
	else if (a.number > b.number)return false;
	else if (a.number < b.number)return true;

	return false;
}

int main() {
	int m, n;
	struct Str student[100];
	int k = 0;
	cin >> m >> n;

	for (int i = 0; i < m; i++) {
		cin >> student[i].name >> student[i].score;
		student[i].number = k;
		k++;
	}
	sort(student, student + m, desc);

	for (int i = 0; i <n ; i++) {
		cout  << student[i].name << endl;
	}


	return 0;
}