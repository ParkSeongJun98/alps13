#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

typedef struct schedule {
	string plan;
	int year;
	int month;
	int day;
};

bool compare(schedule planA, schedule planB) {
	bool is_change = false;

	if (planA.year < planB.year) {
		is_change = true;
	}
	else if (planA.year == planB.year) {
		if (planA.month < planB.month) {
			is_change = true;
		}
		else if (planA.month == planB.month) {
			if (planA.day < planB.day)
				is_change = true;
		}
	}
	return is_change;
}

int main(void) {
	//배열 제작
	int n;
	schedule planner[100];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> planner[i].plan >> planner[i].year >> planner[i].month >> planner[i].day;
	}
	sort(planner, planner + n, compare);

	for (int i = 0; i < n; i++) {
		cout << planner[i].plan << '\n';
	}


}