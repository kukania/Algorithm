#include<iostream>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	int tempA = (a + b) / 2;
	int tempB = a - tempA;
	if (tempA < 0 || tempB < 0 || a<b || (a+b)%2==1)
		cout << -1<<endl;
	else {
		if (tempA > tempB) {
			cout << tempA << " " << tempB << endl;
		}
		else {
			cout << tempB << " " << tempA << endl;
		}
	}
	return 0;
}