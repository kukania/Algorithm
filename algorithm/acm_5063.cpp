#include<iostream>
using namespace std;
int main() {
	int a, b, c;
	int testCase;
	cin >> testCase;
	while (testCase--) {
		cin >> a >> b >> c;
		if (a < b - c)
			cout << "advertise" << endl;
		else if (a == b - c)
			cout << "does not matter" << endl;
		else
			cout << "do not advertise" << endl;
	}
}