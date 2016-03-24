#include<iostream>
using namespace std;
int main() {
	int a, b;
	cin >> a >> b;
	int min = a * 60 + b;
	min -= 45;
	if (min < 0) {
		a = 23;
		b = 60 + min;
	}
	else {
		b = min % 60;
		min /= 60;
		a = min;
		a %= 24;
	}
	cout << a << " " << b << endl;
}