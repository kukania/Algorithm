#include<iostream>
using namespace std;
int main() {
	int minH;
	int minD;
	int temp;
	cin >> minH;
	for (int i = 0; i < 2; i++) {
		cin >> temp;
		if (minH > temp)
			minH = temp;
	}
	cin >> minD;
	for (int i = 0; i < 1; i++) {
		cin >> temp;
		if (minD > temp)
			minD = temp;
	}
	cout << minH + minD - 50 << endl;
}