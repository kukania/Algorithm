#include<iostream>
using namespace std;
int main() {
	int input;
	cin >> input;
	int maxS = 0;
	for (int i = 0; i < input; i++) {
		int a, b, c;
		int temp;
		int max=0;
		cin >> a >> b >> c;
		if (a == b && b == c)
			temp = 10000 + a * 1000;
		else if (a == b || b == c) {
			max = a > b ? a : b;
			max = max > c ? max : c;
			temp = 1000 + max * 100;
		}
		else {
			max = a > b ? a : b;
			max = max > c ? max : c;
			temp =max * 100;
		}
		if (maxS < temp) {
			maxS = temp;
		}
	}
	cout << maxS << endl;
	return 0;
}