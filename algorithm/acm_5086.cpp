#include<iostream>
using namespace std;
int main() {
	int a, b;
	cin >> a >> b;
	while (a&&b) {
		if (a < b) {
			if (b%a == 0)
				cout << "factor" << endl;
			else
				cout << "neither" << endl;
		}
		else if (a>b) {
			if (a%b == 0)
				cout << "multiple" << endl;
			else
				cout << "neither" << endl;
		}
		cin >> a >> b;
	}
}