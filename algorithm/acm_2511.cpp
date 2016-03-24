#include<iostream>
using namespace std;
int main() {
	int a[10], b[10];
	int aSum = 0, bSum = 0;
	for (int i = 0; i < 10; i++) { cin >> a[i]; }
	for (int i = 0; i < 10; i++) {
		cin >> b[i];
		if (a[i] > b[i])
			aSum += 3;
		else if (a[i] < b[i])
			bSum += 3;
		else {
			aSum += 1; bSum += 1;
		}
	}
	cout << aSum << " " << bSum << endl;
	if (aSum > bSum)cout << "A" << endl;
	else if (aSum < bSum) cout << "B" << endl;
	else {
		int cnt = 0;
		for (int i = 9; i >= 0; i--) {
			if (a[i] == b[i])
				cnt++;
			else if (a[i] > b[i]) {
				cout << "A" << endl;
				break;
			}
			else {
				cout << "B" << endl;
				break;
			}
		}
		if (cnt == 10) cout << "D" << endl;
	}
	return 0;
}