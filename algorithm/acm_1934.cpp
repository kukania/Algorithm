#include<iostream>
using namespace std;
int getGCD(int a, int b) {
	int max = a > b ? a : b;
	int min = a > b ? b : a;
	while (max != 0) {
		int temp = max - min;
		if (temp == 0)
			break;
		max = temp > min?temp:min;
		min = temp > min ? min : temp;
	}
	return min;
}
int main() {
	int testCase;
	cin >> testCase;
	int a, b;
	while (testCase--) {
		cin >> a >> b;
		cout << a*(b / getGCD(a,b)) << endl;
	}
}
