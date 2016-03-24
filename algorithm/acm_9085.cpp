#include<iostream>
using namespace std;

int main() {
	int testCase;
	cin >> testCase;
	while (testCase--) {
		int temp = 0;
		int num;
		cin >> num;
		int sum=0;
		for (int i = 0; i < num; i++) {
			cin >> temp;
			sum += temp;
		}
		cout << sum << endl;
	}
	return 0;
}