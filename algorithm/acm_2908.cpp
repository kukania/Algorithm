#include<iostream>
#include<string>
using namespace std;
int main() {
	string a, b;
	cin >> a >> b;
	int aV=0, bV=0;
	for (int i = a.size() - 1; i >= 0; i--) {
		aV *= 10;
		aV += a[i] - '0';
	}
	for (int i = b.size() - 1; i >= 0; i--) {
		bV *= 10;
		bV += b[i] - '0';
	}
	cout << (aV > bV ? aV : bV) << endl;
}