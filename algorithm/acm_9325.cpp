#include<iostream>
using namespace std;
int main() {
	int testCase;
	cin >> testCase;
	while (testCase--) {
		int car;
		int option;
		int mul, val;
		int sum = 0;
		cin >> car>>option;
		sum += car;
		for (int i = 0; i < option; i++) {
			cin >> mul >> val;
			sum += mul*val;
		}
		cout << sum << endl;
	}
}