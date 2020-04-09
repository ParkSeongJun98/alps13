#include<iostream>
#include<algorithm>
using namespace std;

struct Str{
	int y, m, d;
	char sc[100];
};

bool desc(const Str &a, const Str &b) {
	if (a.y < b.y) return true;
	else if (a.y > b.y) return false;
	if (a.m < b.m)return true;
	else if (a.m > b.m) return false;
	if (a.d < b.d) return true;
	else if (a.d > b.d) return false;

	for (int i = 0; i < 99; i++)
	{
		if (a.sc[i] < b.sc[i])return true;
		else if (a.sc[i] > b.sc[i])return false;
	}

	return false;
}

int main() {
	int n;
	struct Str schedule[100];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> schedule[i].sc >> schedule[i].y >> schedule[i].m >> schedule[i].d;
	}
	sort(schedule, schedule + n, desc);

	for (int i = 0; i < n; i++) {
		cout << schedule[i].sc<<endl;
	}

	return 0;
}