#include<iostream>
using namespace std;

int selfnumber(int i) {
	int num = i;
	if (i >= 1000) { num += i / 1000; i %= 1000; }
	if (i >= 100) { num += i / 100; i %= 100; }
	if (i >= 10) { num += i / 10; i %= 10; }

	return num+i;
}

int main() {
	int a, b, k;
	int num = 0;
	int array[5000];
	cin >> a >> b;
	for (int i = a; i <= b; i++) {
		array[i] = 0;
	}
	for (int i = 1; i <= b; i++) {
		k = selfnumber(i);
		if (k >= a && k <= b)
			array[k] = 1;
	}
	for (int i = a; i <= b; i++) {
		if (array[i] == 0) 
			num += i;
	}
	cout << num;

	return 0;
}