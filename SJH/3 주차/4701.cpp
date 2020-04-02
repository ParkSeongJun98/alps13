#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	int num;
	int a;
	int k = 0;
	vector<int> array1;
	cin >> num;

	for (int i = 0; i < num; i++) {
		cin >> a ;
		array1.push_back(a);
	}
	int b = array1.at(0);
	int c = array1.at(1);
	k = abs(array1.at(0) + array1.at(1));
	for (int i = 0; i < num; i++) {
		for (int j = i + 1; j < num; j++) {
			int a = abs(array1.at(i) + array1.at(j));
			if (k > a) {
				b = array1.at(i);
				c = array1.at(j);
				k = a;
			}
		}
	}

	if (b < c) {
		cout <<b << " " << c << endl;
	}
	else {
		cout << c << " " <<b << endl;
	}

	return 0;
}
